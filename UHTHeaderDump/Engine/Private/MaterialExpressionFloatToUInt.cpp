#include "MaterialExpressionFloatToUInt.h"

UMaterialExpressionFloatToUInt::UMaterialExpressionFloatToUInt() {
    this->MenuCategories.AddDefaulted(1);
    this->Mode = EFloatToIntMode::Truncate;
}


