#include "MaterialExpressionLocalPosition.h"

UMaterialExpressionLocalPosition::UMaterialExpressionLocalPosition() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->IncludedOffsets = EPositionIncludedOffsets::IncludeOffsets;
    this->LocalOrigin = ELocalPositionOrigin::Instance;
}


