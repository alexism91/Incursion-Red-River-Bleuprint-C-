#include "MaterialExpressionPerInstanceCustomData.h"

UMaterialExpressionPerInstanceCustomData::UMaterialExpressionPerInstanceCustomData() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->ConstDefaultValue = 0.00f;
    this->DataIndex = 0;
}


