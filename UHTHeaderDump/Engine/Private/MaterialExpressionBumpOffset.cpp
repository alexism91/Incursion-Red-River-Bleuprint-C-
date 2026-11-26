#include "MaterialExpressionBumpOffset.h"

UMaterialExpressionBumpOffset::UMaterialExpressionBumpOffset() {
    this->MenuCategories.AddDefaulted(1);
    this->HeightRatio = 0.05f;
    this->ReferencePlane = 0.50f;
    this->ConstCoordinate = 0;
}


