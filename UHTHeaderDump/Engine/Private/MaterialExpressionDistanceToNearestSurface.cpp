#include "MaterialExpressionDistanceToNearestSurface.h"

UMaterialExpressionDistanceToNearestSurface::UMaterialExpressionDistanceToNearestSurface() {
    this->MenuCategories.AddDefaulted(1);
    this->WorldPositionOriginType = EPositionOrigin::Absolute;
}


