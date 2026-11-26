#include "MaterialExpressionVectorParameter.h"

UMaterialExpressionVectorParameter::UMaterialExpressionVectorParameter() {
    this->MenuCategories.AddDefaulted(1);
    this->bUseCustomPrimitiveData = false;
    this->PrimitiveDataIndex = 0;
}


