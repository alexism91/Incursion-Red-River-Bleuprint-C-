#include "MaterialExpressionMaterialXRange.h"

UMaterialExpressionMaterialXRange::UMaterialExpressionMaterialXRange() {
    this->ConstInputLow = 0.00f;
    this->ConstInputHigh = 1.00f;
    this->ConstTargetLow = 0.00f;
    this->ConstTargetHigh = 1.00f;
    this->ConstGamma = 1.00f;
    this->bConstClamp = false;
}


