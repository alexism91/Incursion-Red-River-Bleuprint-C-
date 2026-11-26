#include "MaterialExpressionRuntimeVirtualTextureSampleParameter.h"

UMaterialExpressionRuntimeVirtualTextureSampleParameter::UMaterialExpressionRuntimeVirtualTextureSampleParameter() {
    this->bIsParameterExpression = true;
    this->MenuCategories.AddDefaulted(2);
    this->SortPriority = 32;
}


