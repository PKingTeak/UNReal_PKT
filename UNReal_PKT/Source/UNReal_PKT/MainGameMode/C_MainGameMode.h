// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "C_MainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_PKT_API AC_MainGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	UFUNCTION()
	BeginPlay() override;

	
};
