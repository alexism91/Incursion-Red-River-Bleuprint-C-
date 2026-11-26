#include "MaterialExpressionComponentMask.h"

UMaterialExpressionComponentMask::UMaterialExpressionComponentMask() {
    this->MenuCategories.AddDefaulted(2);
    this->R = false;
    this->G = false;
    this->B = false;
    this->A = false;
}


