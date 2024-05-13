// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <st_Trap.h>
#include <st_QGraph.h>
#include <st_Edge.h>

class SEIDELTRIANGULATOR_API Ust_TrapMap
{
private:
	TArray<Fst_Trap*> Items;
	Fst_Trap* Root;
	Ust_QGraph Graph;

	Fst_Edge* BCross = nullptr;
	Fst_Edge* TCross = nullptr;

	Fst_Point tl = Fst_Point(true, false);
	Fst_Point tr = Fst_Point(false, false);
	Fst_Point bl = Fst_Point(true, true);
	Fst_Point br = Fst_Point(false, true);
	
	Fst_Trap* Next(Fst_Trap* trap, Fst_Edge* edge);
	void Case1(Fst_Trap* trap, Fst_Edge* edge);
	Fst_Trap* Case2(Fst_Trap* trap, Fst_Edge* edge);
	Fst_Trap* Case3(Fst_Trap* trap, Fst_Edge* edge);
	Fst_Trap* Case4(Fst_Trap* trap, Fst_Edge* edge);

public:
	Ust_TrapMap();
	~Ust_TrapMap();

	void AddEdge(Fst_Edge* edge);
	void CollectPoints();
	void Clear();
};
