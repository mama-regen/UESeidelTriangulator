// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

struct SEIDELTRIANGULATOR_API Fst_Point
{
public:
	int32 Id = -1;
	float X = 0.f;
	float Y = 0.f;

	Fst_Point() = default;
	Fst_Point(bool negX, bool negY);
	Fst_Point(int32 id, float x, float y);
	~Fst_Point() {
		std::string x = "You shouldn't be here!";
	}

	float Cross(Fst_Point* a, Fst_Point* b);

	const bool operator == (const Fst_Point& rhs) const;
	const bool operator != (const Fst_Point& rhs) const;
	const bool operator > (const Fst_Point& rhs) const;
	const bool operator < (const Fst_Point& rhs) const;
	const bool operator >= (const Fst_Point& rhs) const;
	const bool operator <= (const Fst_Point& rhs) const;

};
