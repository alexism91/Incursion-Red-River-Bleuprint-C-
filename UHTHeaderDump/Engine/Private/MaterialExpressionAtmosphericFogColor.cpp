#include "MaterialExpressionAtmosphericFogColor.h"

UMaterialExpressionAtmosphericFogColor::UMaterialExpressionAtmosphericFogColor() {
    this->MenuCategories.AddDefaulted(1);
    this->WorldPositionOriginType = EPositionOrigin::Absolute;
}


