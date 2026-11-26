#include "MaterialExpressionUserSceneTexture.h"

UMaterialExpressionUserSceneTexture::UMaterialExpressionUserSceneTexture() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->bFiltered = false;
    this->bClamped = false;
}


