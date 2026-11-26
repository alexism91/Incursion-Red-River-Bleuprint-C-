#include "MaterialExpressionChannelMaskParameter.h"

UMaterialExpressionChannelMaskParameter::UMaterialExpressionChannelMaskParameter() {
    this->MenuCategories.AddDefaulted(2);
    this->MaskChannel = EChannelMaskParameterColor::Red;
}


