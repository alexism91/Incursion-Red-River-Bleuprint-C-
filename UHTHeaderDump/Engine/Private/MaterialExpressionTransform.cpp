#include "MaterialExpressionTransform.h"

UMaterialExpressionTransform::UMaterialExpressionTransform() {
    this->MenuCategories.AddDefaulted(1);
    this->TransformSourceType = TRANSFORMSOURCE_Tangent;
    this->TransformType = TRANSFORM_World;
}


