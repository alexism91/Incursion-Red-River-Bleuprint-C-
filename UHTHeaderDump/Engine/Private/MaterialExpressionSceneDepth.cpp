#include "MaterialExpressionSceneDepth.h"

UMaterialExpressionSceneDepth::UMaterialExpressionSceneDepth() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->InputMode = EMaterialSceneAttributeInputMode::Coordinates;
}


