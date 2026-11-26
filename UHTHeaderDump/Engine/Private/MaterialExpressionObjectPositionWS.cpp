#include "MaterialExpressionObjectPositionWS.h"

UMaterialExpressionObjectPositionWS::UMaterialExpressionObjectPositionWS() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(2);
    this->OriginType = EPositionOrigin::Absolute;
}


