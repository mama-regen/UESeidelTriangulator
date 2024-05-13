#include "st_Shape.h"

Fst_Shape::Fst_Shape(bool dflt)
{
	if (dflt) {
		TArray<FVector2D> DfltPnts;

		DfltPnts.Add(FVector2D(0, 4));
		DfltPnts.Add(FVector2D(4, 4));
		DfltPnts.Add(FVector2D(0, 0));
		DfltPnts.Add(FVector2D(0, 4));

		Bounds = Fst_Ring(DfltPnts);
	}
}

Fst_Shape::Fst_Shape(Fst_Ring bounds, TArray<Fst_Ring> holes)
{
	Bounds = bounds;
	Holes = holes;
}
