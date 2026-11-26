#include "MaterialExpressionDynamicParameter.h"

UMaterialExpressionDynamicParameter::UMaterialExpressionDynamicParameter() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(2);
    this->ParamNames.AddDefaulted(4);
    this->ParameterIndex = 0;
}


