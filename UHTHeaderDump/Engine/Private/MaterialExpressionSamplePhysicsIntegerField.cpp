#include "MaterialExpressionSamplePhysicsIntegerField.h"

UMaterialExpressionSamplePhysicsIntegerField::UMaterialExpressionSamplePhysicsIntegerField() {
    this->MenuCategories.AddDefaulted(1);
    this->WorldPositionOriginType = EPositionOrigin::Absolute;
    this->FieldTarget = Integer_DynamicState;
}


