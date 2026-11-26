#include "MaterialExpressionSkyAtmosphereLightIlluminance.h"

UMaterialExpressionSkyAtmosphereLightIlluminance::UMaterialExpressionSkyAtmosphereLightIlluminance() {
    this->MenuCategories.AddDefaulted(1);
    this->LightIndex = 0;
    this->WorldPositionOriginType = EPositionOrigin::Absolute;
}


