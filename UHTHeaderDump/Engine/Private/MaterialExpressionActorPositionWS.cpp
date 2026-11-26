#include "MaterialExpressionActorPositionWS.h"

UMaterialExpressionActorPositionWS::UMaterialExpressionActorPositionWS() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(2);
    this->OriginType = EPositionOrigin::Absolute;
}


