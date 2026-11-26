#include "MaterialExpressionSubstrateSlabBSDF.h"

UMaterialExpressionSubstrateSlabBSDF::UMaterialExpressionSubstrateSlabBSDF() {
    this->SubsurfaceProfile = NULL;
    this->SpecularProfile = NULL;
    this->bUseSSSDiffusion = true;
    this->SubSurfaceType = MSS_Diffusion;
}


