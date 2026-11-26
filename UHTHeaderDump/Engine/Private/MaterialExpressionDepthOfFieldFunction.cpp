#include "MaterialExpressionDepthOfFieldFunction.h"

UMaterialExpressionDepthOfFieldFunction::UMaterialExpressionDepthOfFieldFunction() {
    this->MenuCategories.AddDefaulted(1);
    this->FunctionValue = TDOF_NearAndFarMask;
}


