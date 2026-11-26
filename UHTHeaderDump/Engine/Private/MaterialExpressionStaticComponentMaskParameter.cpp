#include "MaterialExpressionStaticComponentMaskParameter.h"

UMaterialExpressionStaticComponentMaskParameter::UMaterialExpressionStaticComponentMaskParameter() {
    this->MenuCategories.AddDefaulted(1);
    this->DefaultR = false;
    this->DefaultG = false;
    this->DefaultB = false;
    this->DefaultA = false;
}


