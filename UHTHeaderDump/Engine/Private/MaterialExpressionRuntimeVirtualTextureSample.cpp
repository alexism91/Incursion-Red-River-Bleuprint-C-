#include "MaterialExpressionRuntimeVirtualTextureSample.h"

UMaterialExpressionRuntimeVirtualTextureSample::UMaterialExpressionRuntimeVirtualTextureSample() {
    this->MenuCategories.AddDefaulted(1);
    this->VirtualTexture = NULL;
    this->MaterialType = ERuntimeVirtualTextureMaterialType::BaseColor;
    this->bSinglePhysicalSpace = true;
    this->bAdaptive = false;
    this->WorldPositionOriginType = EPositionOrigin::Absolute;
    this->TextureAddressMode = RVTTA_Clamp;
    this->MipValueMode = RVTMVM_None;
    this->bEnableFeedback = true;
}


