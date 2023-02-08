// Fill out your copyright notice in the Description page of Project Settings.
#include "CombatEntity.h"
#include "CombatManager.h"
#include "SkillFactory.h"
#include "SkillsData.h"





void UCombatEntity::SetTacticsEntity(USkillFactory* aSkillFactory)
{
    abilityScoreMap.Add(EAbilityScoreTypes::Strength,  NewObject<UCombatAbilityStats>());
    abilityScoreMap.Add(EAbilityScoreTypes::Magic,     NewObject<UCombatAbilityStats>());
    abilityScoreMap.Add(EAbilityScoreTypes::Hit,       NewObject<UCombatAbilityStats>());
    abilityScoreMap.Add(EAbilityScoreTypes::Evasion,   NewObject<UCombatAbilityStats>());
    abilityScoreMap.Add(EAbilityScoreTypes::Defence,   NewObject<UCombatAbilityStats>());
    abilityScoreMap.Add(EAbilityScoreTypes::Resistance,NewObject<UCombatAbilityStats>());
    
}

void UCombatEntity::SetTacticsEvents(UCombatManager* aCombatManager)
{
    aCombatManager->OnRoundEndDelegate.AddDynamic(this,&UCombatEntity::EndTurn);
}

void UCombatEntity::EndTurn()
{
    for (TTuple<EAbilityScoreTypes, UCombatAbilityStats*> abilityScore : abilityScoreMap)
    {
        abilityScore.Value->TurnEnd();
    }
}



void UCombatEntity::SetHealth(int aHealth)
{
//    currentHealth = currentClass->currentClassLevel->maxHealth;
}

int UCombatEntity::CalculateDamage(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    int decementBy = aSkill.damage;


    int strengthAllStats =  aAttacker->abilityScoreMap[EAbilityScoreTypes::Strength]->GetAllStats() / ABILITYSCORE_CONVERSION_RATIO;
    int magicAllStats    =  aAttacker->abilityScoreMap[EAbilityScoreTypes::Magic]->GetAllStats()    / ABILITYSCORE_CONVERSION_RATIO;
    decementBy += aSkill.skillDamageType == ESkillDamageType::Strength ? strengthAllStats : magicAllStats;
	
    if (aSkill.elementalType == ElementalWeakness)
    {
        decementBy = decementBy * WEAK_DAMAGE_INCREASE;
    }
    if (aSkill.elementalType == ElementalStrength)
    {
        decementBy = decementBy * STRONG_DAMAGE_REDUCTION;
    }

    decementBy -=  aSkill.skillDamageType == ESkillDamageType::Strength ?
        abilityScoreMap[EAbilityScoreTypes::Defence]->GetAllStats()    / ABILITYSCORE_CONVERSION_RATIO :
        abilityScoreMap[EAbilityScoreTypes::Resistance]->GetAllStats() / ABILITYSCORE_CONVERSION_RATIO;
	
    return decementBy;
}

void UCombatEntity::Reset()
{
    
}

PressTurnReactions UCombatEntity::DecrementHealth(UCombatEntity* aAttacker, FSkillsData aSkill)
{
    PressTurnReactions reaction = PressTurnReactions::Normal;
	    
    if (aSkill.elementalType == ElementalWeakness)
    {
        reaction =  PressTurnReactions::Weak;
    }
    if (aSkill.elementalType ==  ElementalStrength)
    {
        reaction =  PressTurnReactions::Strong;
    }

    currentHealth -= CalculateDamage(aAttacker,aSkill);
    DeathCheck();
    if(currentHealth < 0)
    {
        currentHealth = 0;
    }
    hasHealthOrManaValuesChanged.Broadcast();
    if(!isMarkedForDeath)
    {
        ActivateDamageHitEffect();
    }
    return reaction;
}


PressTurnReactions UCombatEntity::IncrementHealth(UCombatEntity* aHealer, FSkillsData aSkill)
{
    int AmountOfHpToAdd =  aSkill.damage + (aHealer->abilityScoreMap[EAbilityScoreTypes::Magic]->GetAllStats() / ABILITYSCORE_CONVERSION_RATIO);
    currentHealth += AmountOfHpToAdd;
    
    if(currentHealth >= maxHealth)
    {
        currentHealth = maxHealth;
    }
    hasHealthOrManaValuesChanged.Broadcast();
    return PressTurnReactions::Normal;
}

PressTurnReactions UCombatEntity::ApplyBuff(UCombatEntity* aBuffer, FSkillsData aSkill)
{
     abilityScoreMap[aSkill.ablityScoreToBuffOrDebuff]->AttachAbilityScoreChange(aSkill.abilityScoreChangeDuration,true);


    return PressTurnReactions::Normal;
}

void UCombatEntity::DecrementMana(int aDecrementBy)
{
    currentMana -= aDecrementBy;
    hasHealthOrManaValuesChanged.Broadcast();
}

ECharactertype UCombatEntity::GetCharactertype()
{
    return characterType;
}

void UCombatEntity::Resurrection()
{
}

void UCombatEntity::DeathCheck()
{
    if(currentHealth <= 0)
    {
        isMarkedForDeath = true;
    }
}

void UCombatEntity::Death()
{
    wasKilled.Broadcast();
}

void UCombatEntity::ActivateDamageHitEffect()
{
    wasDamaged.Broadcast();
}

void UCombatEntity::SetToDefaultState()
{
}

float UCombatEntity::GetHealthPercentage()
{
    return 0;
}

float UCombatEntity::GetPotentialHealthPercentage(int aDamage)
{
    int tempCurrentHealth = currentHealth;
    tempCurrentHealth -= aDamage;

    return  (float)tempCurrentHealth / (float)maxHealth;
    
}

float UCombatEntity::GetManaPercentage()
{
    return 0;
}

bool UCombatEntity::GetIsMarkedForDeath()
{
    return isMarkedForDeath;
}
