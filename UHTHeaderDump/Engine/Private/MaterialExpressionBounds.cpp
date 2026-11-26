#include "MaterialExpressionBounds.h"

UMaterialExpressionBounds::UMaterialExpressionBounds() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->Type = MEILB_InstanceLocal;
}


