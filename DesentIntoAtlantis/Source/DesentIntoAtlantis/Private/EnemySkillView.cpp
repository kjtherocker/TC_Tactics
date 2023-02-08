// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySkillView.h"

#include "SkillsData.h"
#include "Components/TextBlock.h"

void UEnemySkillView::SetSkill(FSkillsData aSkill, UEnemyCombatEntity* aEnemyCombatEntity)
{
	BW_SkillIcon->SetBrushFromTexture(aSkill.skillIcon);
	BW_SkillName->SetText(FText(FText::FromString(aSkill.skillName)));
	BW_EnemyName->SetText(FText(FText::FromString(aEnemyCombatEntity->enemyEntityData.characterName)));

}
