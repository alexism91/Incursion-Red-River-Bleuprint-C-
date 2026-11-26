#include "MaterialExpressionStaticBoolParameter.h"

UMaterialExpressionStaticBoolParameter::UMaterialExpressionStaticBoolParameter() {
    this->MenuCategories.AddDefaulted(1);
    this->DefaultValue = false;
    this->DynamicBranch = false;
}


