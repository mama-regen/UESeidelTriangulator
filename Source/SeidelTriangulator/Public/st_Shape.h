// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <st_Ring.h>
#include "st_Shape.generated.h"

USTRUCT(BlueprintType)
struct SEIDELTRIANGULATOR_API Fst_Shape
{
	GENERATED_BODY()

public:
	Fst_Shape(){}
	Fst_Shape(bool dflt);
	Fst_Shape(Fst_Ring bounds, TArray<Fst_Ring> holes);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	Fst_Ring Bounds;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<Fst_Ring> Holes;
};
