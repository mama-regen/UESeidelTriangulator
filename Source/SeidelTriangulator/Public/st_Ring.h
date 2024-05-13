// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "st_Ring.generated.h"

USTRUCT(BlueprintType)
struct SEIDELTRIANGULATOR_API Fst_Ring
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FVector2D> Points;

	Fst_Ring() {}
	Fst_Ring(TArray<FVector2D> points);
};
