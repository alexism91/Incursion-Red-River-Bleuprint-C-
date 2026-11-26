#include "MaterialExpressionColorRamp.h"

UMaterialExpressionColorRamp::UMaterialExpressionColorRamp() {
    this->MenuCategories.AddDefaulted(1);
    this->ConstInput = 0.50f;
    this->ColorCurve = NULL;
}


