#include "MaterialExpressionPathTracingBufferTexture.h"

UMaterialExpressionPathTracingBufferTexture::UMaterialExpressionPathTracingBufferTexture() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->PathTracingBufferTextureId = PTBT_Radiance;
}


