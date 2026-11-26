#include "MaterialExpressionTransformPosition.h"

UMaterialExpressionTransformPosition::UMaterialExpressionTransformPosition() {
    this->MenuCategories.AddDefaulted(1);
    this->TransformSourceType = TRANSFORMPOSSOURCE_Local;
    this->TransformType = TRANSFORMPOSSOURCE_Local;
    this->ConstPeriodicWorldTileSize = 32.00f;
    this->ConstFirstPersonInterpolationAlpha = 1.00f;
    this->bUsesPeriodicWorldPosition = false;
    this->bUsesFirstPersonInterpolationAlpha = false;
}


