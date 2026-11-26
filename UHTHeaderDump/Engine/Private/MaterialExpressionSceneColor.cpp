#include "MaterialExpressionSceneColor.h"

UMaterialExpressionSceneColor::UMaterialExpressionSceneColor() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->InputMode = EMaterialSceneAttributeInputMode::Coordinates;
}


