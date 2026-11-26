#include "MaterialExpressionBlendMaterialAttributes.h"

UMaterialExpressionBlendMaterialAttributes::UMaterialExpressionBlendMaterialAttributes() {
    this->MenuCategories.AddDefaulted(1);
    this->PixelAttributeBlendType = EMaterialAttributeBlend::Blend;
    this->VertexAttributeBlendType = EMaterialAttributeBlend::Blend;
}


