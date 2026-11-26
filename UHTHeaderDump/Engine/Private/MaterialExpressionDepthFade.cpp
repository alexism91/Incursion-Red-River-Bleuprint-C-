#include "MaterialExpressionDepthFade.h"

UMaterialExpressionDepthFade::UMaterialExpressionDepthFade() {
    this->MenuCategories.AddDefaulted(2);
    this->OpacityDefault = 1.00f;
    this->FadeDistanceDefault = 100.00f;
}


