#include "MaterialExpressionSceneDepthWithoutWater.h"

UMaterialExpressionSceneDepthWithoutWater::UMaterialExpressionSceneDepthWithoutWater() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->InputMode = EMaterialSceneAttributeInputMode::Coordinates;
    this->FallbackDepth = 1000000.00f;
}


