// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <map>

#include "CoreMinimal.h"
#include "DataTableUtils.h"
#include "EFloorIdentifier.h"
#include "GameFramework/Actor.h"
#include "FloorNode.h"
#include "FloorBase.h"
#include "FloorPawn.h"
#include "FloorEnemyPawn.h"
#include "FloorManager.generated.h"


struct FSkillsData;
UCLASS()
class DESENTINTOATLANTIS_API AFloorManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorManager();
	void Initialize(ADesentIntoAtlantisGameModeBase* aGameModeBase);
	
	void CreateGrid(UFloorBase* aFloor);
	void CreateFloor(EFloorIdentifier aFloorIdentifier);
	void SpawnFloorNode(int aRow, int aColumn,int aIndex);
	void SpawnFloorEnemyPawn(FVector2D aPositionInGrid);
	void SpawnFloor(UFloorBase* aFloorBase);

	void MovePlayerToPreviousNode();
	
	AFloorNode* GetNodeInDirection(FVector2D CurrentPosition,ECardinalNodeDirections TargetDirection);
	AFloorNode* GetNode(FVector2D CurrentPosition);

	UPROPERTY()
	TArray<AFloorNode*> floorNodes;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> floorNodeReference;
	UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> floorEnemyPawnReference;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY()
	TMap<EFloorIdentifier,UFloorBase*> floorDictionary;
	UPROPERTY()
	UFloorBase* currentFloor;
	TMap<ECardinalNodeDirections, FVector2D>  cardinalPositions;
	
private:
	void SetFloorNodeNeightbors(TArray<AFloorNode*> aFloorNodes);
	void SetPlayerPosition(FVector2D aStartPositionInGrid);
	ADesentIntoAtlantisGameModeBase* gameModeBase;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
