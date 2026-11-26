#include "MaterialExpressionLinearInterpolate.h"

UMaterialExpressionLinearInterpolate::UMaterialExpressionLinearInterpolate() {
    this->MenuCategories.AddDefaulted(2);
    this->ConstA = 0.00f;
    this->ConstB = 1.00f;
    this->ConstAlpha = 0.50f;
}


