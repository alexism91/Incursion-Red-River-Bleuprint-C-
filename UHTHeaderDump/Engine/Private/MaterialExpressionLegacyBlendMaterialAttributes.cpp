#include "MaterialExpressionLegacyBlendMaterialAttributes.h"

UMaterialExpressionLegacyBlendMaterialAttributes::UMaterialExpressionLegacyBlendMaterialAttributes() {
    this->bCollapsed = true;
    this->MenuCategories.AddDefaulted(1);
    this->BlendFunctionType = EMaterialAttributeBlendFunction::Horizontal;
}


