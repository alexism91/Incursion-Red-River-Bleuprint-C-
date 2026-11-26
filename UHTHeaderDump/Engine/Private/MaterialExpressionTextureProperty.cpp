#include "MaterialExpressionTextureProperty.h"

UMaterialExpressionTextureProperty::UMaterialExpressionTextureProperty() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->Property = TMTM_TextureSize;
}


