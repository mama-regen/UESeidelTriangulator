// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "st_Triang.generated.h"

USTRUCT(BlueprintType)
struct SEIDELTRIANGULATOR_API Fst_Triang
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, meta=(AllowPrivateAccess = "true"))
	int32 P = -1;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, meta = (AllowPrivateAccess = "true"))
	int32 Q = -1;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, meta = (AllowPrivateAccess = "true"))
	int32 R = -1;

public:
	Fst_Triang() {}
	Fst_Triang(int32 p, int32 q, int32 r);

	int32 GetP();
	int32 GetQ();
	int32 GetR();
};
