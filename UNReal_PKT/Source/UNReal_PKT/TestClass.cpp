// Fill out your copyright notice in the Description page of Project Settings.


#include "TestClass.h"

// ������ �Ҹ������ �翬��

ATestClass::ATestClass()
{
	int a = 0;
}

ATestClass::~ATestClass()
{
	int a = 0;
}

void ATestClass::BeginPlay()
{
	int a = 0;
	Super::BeginPlay();

	int b = 0;
	// GetWorld()->SpawnActor<>

}

void ATestClass::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);

	if (MonsterCount == 0)
	{
		int a = 0;
	}
	--MonsterCount;

}