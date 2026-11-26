#include "CollisionGeometryVisualizationProperties.h"

UCollisionGeometryVisualizationProperties::UCollisionGeometryVisualizationProperties() {
    this->bShowCollision = true;
    this->bShowSolid = false;
    this->LineThickness = 3.00f;
    this->bShowHidden = false;
    this->bRandomColors = true;
    this->LineMaterial = NULL;
    this->LineMaterialShowingHidden = NULL;
    this->TriangleMaterial = NULL;
    this->bEnableShowCollision = true;
    this->bEnableShowSolid = true;
}


