#include "PCGCollisionShape.h"

FPCGCollisionShape::FPCGCollisionShape() {
    this->ShapeType = EPCGCollisionShapeType::Line;
    this->SphereRadius = 0.00f;
    this->CapsuleRadius = 0.00f;
    this->CapsuleHalfHeight = 0.00f;
}

