#include "MaterialExpressionAntialiasedTextureMask.h"

UMaterialExpressionAntialiasedTextureMask::UMaterialExpressionAntialiasedTextureMask() {
    this->MenuCategories.AddDefaulted(1);
    this->Threshold = 0.50f;
    this->Channel = TCC_Alpha;
}


