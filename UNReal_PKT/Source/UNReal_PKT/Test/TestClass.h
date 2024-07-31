// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TestClass.generated.h"

/**
 *
 */
UCLASS()
class  UNREAL_PKT_API ATestClass : public AGameMode
{
	GENERATED_BODY()

public:
	ATestClass();
	~ATestClass();

protected:
	void BeginPlay();
	void Tick(float _DeltaTime) override;

private:
	int MonsterCount = 1000;

};
