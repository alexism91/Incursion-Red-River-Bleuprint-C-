#include "MaterialExpressionSceneTexture.h"

UMaterialExpressionSceneTexture::UMaterialExpressionSceneTexture() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->SceneTextureId = PPI_SceneColor;
    this->bFiltered = false;
}


