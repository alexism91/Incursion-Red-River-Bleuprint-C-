#include "MaterialExpressionSwitch.h"

UMaterialExpressionSwitch::UMaterialExpressionSwitch() {
    this->MenuCategories.AddDefaulted(1);
    this->Description = TEXT("Switch");
    this->ConstSwitchValue = 0.00f;
    this->ConstDefault = 0.00f;
    this->Inputs.AddDefaulted(1);
}


