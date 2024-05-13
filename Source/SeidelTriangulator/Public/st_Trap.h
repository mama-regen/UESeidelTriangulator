// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <st_Point.h>
#include <st_Edge.h>

struct Fst_QNode;

struct SEIDELTRIANGULATOR_API Fst_Trap
{
private:
	void AddPoint(Fst_Edge* edge, Fst_Point* point);

public:
	Fst_Point* Left = nullptr;
	Fst_Point* Right = nullptr;
	Fst_Edge* Top = nullptr;
	Fst_Edge* Bottom = nullptr;
	Fst_QNode* Sink = nullptr;
	Fst_Trap* UpperLeft = nullptr;
	Fst_Trap* UpperRight = nullptr;
	Fst_Trap* LowerLeft = nullptr;
	Fst_Trap* LowerRight = nullptr;
	bool Inside = false;
	bool Removed = false;

	Fst_Trap() {};
	Fst_Trap(Fst_Point* left, Fst_Point* right, Fst_Edge* top, Fst_Edge* bottom);

	void UpdateLeft(Fst_Trap* ul, Fst_Trap* ll);
	void UpdateRight(Fst_Trap* ur, Fst_Trap* lr);
	void UpdateSides(Fst_Trap* ul, Fst_Trap* ll, Fst_Trap* ur, Fst_Trap* lr);
	void MarkInside();
	void AddPoints();
	
	bool Contains(Fst_Point* point);
	Fst_QNode* PopSink();
};
