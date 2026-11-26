#include "MaterialExpressionSamplePhysicsScalarField.h"

UMaterialExpressionSamplePhysicsScalarField::UMaterialExpressionSamplePhysicsScalarField() {
    this->MenuCategories.AddDefaulted(1);
    this->WorldPositionOriginType = EPositionOrigin::Absolute;
    this->FieldTarget = Scalar_DynamicConstraint;
}


