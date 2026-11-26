#include "MaterialExpressionMaterialAttributeLayers.h"

UMaterialExpressionMaterialAttributeLayers::UMaterialExpressionMaterialAttributeLayers() {
    this->MenuCategories.AddDefaulted(2);
    this->NumActiveLayerCallers = 0;
    this->NumActiveBlendCallers = 0;
    this->OutputCaller = NULL;
    this->bIsLayerGraphBuilt = false;
}


