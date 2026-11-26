#include "MaterialExpressionSphericalParticleOpacity.h"

UMaterialExpressionSphericalParticleOpacity::UMaterialExpressionSphericalParticleOpacity() {
    this->MenuCategories.AddDefaulted(1);
    this->ExternalCodeIdentifiers.AddDefaulted(1);
    this->ConstantDensity = 1.00f;
}


