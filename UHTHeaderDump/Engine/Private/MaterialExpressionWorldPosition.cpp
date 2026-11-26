#include "MaterialExpressionWorldPosition.h"

UMaterialExpressionWorldPosition::UMaterialExpressionWorldPosition() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->WorldPositionShaderOffset = WPT_Default;
}


