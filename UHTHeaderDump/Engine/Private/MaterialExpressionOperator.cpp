#include "MaterialExpressionOperator.h"

UMaterialExpressionOperator::UMaterialExpressionOperator() {
    this->MenuCategories.AddDefaulted(1);
    this->Operator = EMaterialExpressionOperatorKind::Add;
    this->ConstA = 0.00f;
    this->ConstB = 1.00f;
    this->ConstC = 1.00f;
}


