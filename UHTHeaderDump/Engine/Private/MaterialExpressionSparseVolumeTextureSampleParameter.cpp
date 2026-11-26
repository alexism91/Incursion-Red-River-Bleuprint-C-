#include "MaterialExpressionSparseVolumeTextureSampleParameter.h"

UMaterialExpressionSparseVolumeTextureSampleParameter::UMaterialExpressionSparseVolumeTextureSampleParameter() {
    this->bIsParameterExpression = true;
    this->MenuCategories.AddDefaulted(2);
    this->SortPriority = 32;
}


