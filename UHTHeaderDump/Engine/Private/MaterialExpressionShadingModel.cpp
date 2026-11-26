#include "MaterialExpressionShadingModel.h"

UMaterialExpressionShadingModel::UMaterialExpressionShadingModel() {
    this->MenuCategories.AddDefaulted(1);
    this->ShadingModel = MSM_DefaultLit;
}


