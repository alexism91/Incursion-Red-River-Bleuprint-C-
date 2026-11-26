#include "MaterialExpressionViewProperty.h"

UMaterialExpressionViewProperty::UMaterialExpressionViewProperty() {
    this->bShaderInputData = true;
    this->MenuCategories.AddDefaulted(1);
    this->Property = MEVP_FieldOfView;
}


