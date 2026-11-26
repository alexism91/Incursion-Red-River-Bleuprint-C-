#include "MaterialExpressionParticlePositionWS.h"

UMaterialExpressionParticlePositionWS::UMaterialExpressionParticlePositionWS() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(3);
    this->OriginType = EPositionOrigin::Absolute;
}


