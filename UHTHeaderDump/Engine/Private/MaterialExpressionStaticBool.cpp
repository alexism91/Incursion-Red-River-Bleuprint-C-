#include "MaterialExpressionStaticBool.h"

UMaterialExpressionStaticBool::UMaterialExpressionStaticBool() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->Value = false;
}


