// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatEntity.h"
#include "CombatManager.h"
#include "PartyHealthbarElement.h"


void UPlayerCombatEntity::SetPlayerEntity(FPlayerEntityData aPlayerEntityData)
{
	playerEntityData = aPlayerEntityData;
}

void UPlayerCombatEntity::SetTacticsEntity(USkillFactory* aSkillFactory)
{
	Super::SetTacticsEntity(aSkillFactory);
	characterType = ECharactertype::Ally;
	skillFactory = aSkillFactory;
}


void UPlayerCombatEntity::SetPlayerClass(UDataTable*  EDataTableClasses)
{
	baseClass = NewObject<UCombatClass>(); 
	baseClass->InitializeDataTable(EDataTableClasses, skillFactory,this,playerEntityData.initialLevel);
	
	ElementalStrength = baseClass->currentClassLevel.ElementalStrength;
	ElementalWeakness = baseClass->currentClassLevel.ElementalWeakness;
	
	SetAbilityScores();
	SetToDefaultState();
}

void UPlayerCombatEntity::Reset()
{
	Super::Reset();
	SetToDefaultState();
}

void UPlayerCombatEntity::SetToDefaultState()
{
	Super::SetToDefaultState();
	maxHealth         = baseClass->currentClassLevel.maxHealth;
	currentHealth     = maxHealth;
	maxMana           = baseClass->currentClassLevel.maxMana;
	currentMana       = maxMana;
    isMarkedForDeath  = false;
	for (TTuple<EAbilityScoreTypes, UCombatAbilityStats*> abilityStats : abilityScoreMap)
	{
		abilityStats.Value->ResetAbilityscore();
	}
}

void UPlayerCombatEntity::SetAbilityScores()
{
	abilityScoreMap[EAbilityScoreTypes::Strength]->base   = baseClass->currentClassLevel.baseStrength;
	abilityScoreMap[EAbilityScoreTypes::Magic]->base      = baseClass->currentClassLevel.baseMagic;
	abilityScoreMap[EAbilityScoreTypes::Hit]->base        = baseClass->currentClassLevel.baseHit;
	abilityScoreMap[EAbilityScoreTypes::Evasion]->base    = baseClass->currentClassLevel.baseEvasion;
	abilityScoreMap[EAbilityScoreTypes::Defence]->base    = baseClass->currentClassLevel.baseDefence;
	abilityScoreMap[EAbilityScoreTypes::Resistance]->base = baseClass->currentClassLevel.baseResistance;
}

float UPlayerCombatEntity::GetHealthPercentage()
{
	return  (float)currentHealth /  (float)baseClass->currentClassLevel.maxHealth;
}

float UPlayerCombatEntity::GetManaPercentage()
{
	return (float)currentMana / (float)baseClass->currentClassLevel.maxMana;
}
