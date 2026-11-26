#include "MaterialExpressionFontSampleParameter.h"

UMaterialExpressionFontSampleParameter::UMaterialExpressionFontSampleParameter() {
    this->bIsParameterExpression = true;
    this->MenuCategories.AddDefaulted(3);
    this->SortPriority = 32;
}


