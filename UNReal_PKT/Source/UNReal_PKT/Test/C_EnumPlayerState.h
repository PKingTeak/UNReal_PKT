// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "C_EnumPlayerState.generated.h"


UENUM(BlueprintType)
enum class EPlayerState : uint8
{
	Player_Idle,
	Player_Walk,
	Player_Run,
	Player_Attack,
	Player_Die
	//»ó
	

};

/**
 * 
 */
UCLASS()
class UNREAL_PKT_API UC_EnumPlayerState : public UObject
{
	GENERATED_BODY()
	
};
