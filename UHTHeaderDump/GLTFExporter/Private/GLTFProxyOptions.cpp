#include "GLTFProxyOptions.h"

UGLTFProxyOptions::UGLTFProxyOptions() {
    this->bBakeMaterialInputs = true;
    this->bUseThinTranslucentShadingModel = false;
    this->DefaultMaterialBakeFilter = TF_Trilinear;
    this->DefaultMaterialBakeTiling = TA_Wrap;
}

void UGLTFProxyOptions::ResetToDefault() {
}


