#include "MaterialExpressionDistanceFieldGradient.h"

UMaterialExpressionDistanceFieldGradient::UMaterialExpressionDistanceFieldGradient() {
    this->MenuCategories.AddDefaulted(1);
    this->WorldPositionOriginType = EPositionOrigin::Absolute;
}


