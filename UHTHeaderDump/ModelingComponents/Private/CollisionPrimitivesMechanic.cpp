#include "CollisionPrimitivesMechanic.h"

UCollisionPrimitivesMechanic::UCollisionPrimitivesMechanic() {
    this->PreviewGeometry = NULL;
    this->DrawnPrimitiveEdges = NULL;
    this->TranslateTransformProxy = NULL;
    this->SphereTransformProxy = NULL;
    this->BoxTransformProxy = NULL;
    this->CapsuleTransformProxy = NULL;
    this->FullTransformProxy = NULL;
    this->CurrentActiveProxy = NULL;
    this->TranslateTransformGizmo = NULL;
    this->SphereTransformGizmo = NULL;
    this->BoxTransformGizmo = NULL;
    this->CapsuleTransformGizmo = NULL;
    this->FullTransformGizmo = NULL;
    this->BoxIntervalGizmo = NULL;
    this->BoxXIntervalSource = NULL;
    this->BoxYIntervalSource = NULL;
    this->BoxZIntervalSource = NULL;
    this->CapsuleIntervalGizmo = NULL;
    this->CapsuleRadiusIntervalSource = NULL;
    this->CapsuleLengthIntervalSource = NULL;
    this->MarqueeMechanic = NULL;
}


