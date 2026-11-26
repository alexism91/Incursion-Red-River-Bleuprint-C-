#include "MaterialExpressionPinBase.h"

UMaterialExpressionPinBase::UMaterialExpressionPinBase() {
    this->MenuCategories.AddDefaulted(1);
    this->PinDirection = EGPD_Input;
}


