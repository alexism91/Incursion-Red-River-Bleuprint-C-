#include "MaterialExpressionSparseVolumeTextureSample.h"

UMaterialExpressionSparseVolumeTextureSample::UMaterialExpressionSparseVolumeTextureSample() {
    this->MenuCategories.AddDefaulted(1);
    this->MipValueMode = TMVM_None;
    this->SamplerSource = SSM_FromTextureAsset;
    this->ConstMipValue = 0;
}


