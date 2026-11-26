#include "MaterialExpressionTextureSample.h"

UMaterialExpressionTextureSample::UMaterialExpressionTextureSample() {
    this->MenuCategories.AddDefaulted(1);
    this->MipValueMode = TMVM_None;
    this->SamplerSource = SSM_FromTextureAsset;
    this->GatherMode = TGM_None;
    this->AutomaticViewMipBias = false;
    this->ConstCoordinate = 0;
    this->ConstMipValue = 0;
}


