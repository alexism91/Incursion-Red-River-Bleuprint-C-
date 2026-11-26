#include "MaterialExpressionDBufferTexture.h"

UMaterialExpressionDBufferTexture::UMaterialExpressionDBufferTexture() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->DBufferTextureId = DBT_A;
}


