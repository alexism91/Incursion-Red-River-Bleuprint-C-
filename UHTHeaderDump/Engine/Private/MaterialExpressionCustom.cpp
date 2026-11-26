#include "MaterialExpressionCustom.h"

UMaterialExpressionCustom::UMaterialExpressionCustom() {
    this->MenuCategories.AddDefaulted(1);
    this->Code = TEXT("// The below expression will get compiled\n// into the output of this node\nfloat3(1, 1, 1)");
    this->OutputType = CMOT_Float3;
    this->Description = TEXT("Custom");
    this->Inputs.AddDefaulted(1);
    this->ShowCode = false;
}


