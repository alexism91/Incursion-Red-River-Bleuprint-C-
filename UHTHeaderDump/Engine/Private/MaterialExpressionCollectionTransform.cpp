#include "MaterialExpressionCollectionTransform.h"

UMaterialExpressionCollectionTransform::UMaterialExpressionCollectionTransform() {
    this->MenuCategories.AddDefaulted(1);
    this->Collection = NULL;
    this->TransformType = EParameterCollectionTransformType::Position;
}


