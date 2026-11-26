#include "MaterialExpressionSamplePhysicsVectorField.h"

UMaterialExpressionSamplePhysicsVectorField::UMaterialExpressionSamplePhysicsVectorField() {
    this->MenuCategories.AddDefaulted(1);
    this->WorldPositionOriginType = EPositionOrigin::Absolute;
    this->FieldTarget = Vector_LinearForce;
}


