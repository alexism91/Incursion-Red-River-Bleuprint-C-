#include "MeshConstrainedDeformationNode.h"

FMeshConstrainedDeformationNode::FMeshConstrainedDeformationNode() {
    this->ResizingMesh = NULL;
    this->BaseMesh = NULL;
    this->Iterations = 0;
    this->bEnableShearConstraint = false;
    this->ShearConstraintStrength = 0.00f;
    this->bEnableBendingConstraint = false;
    this->BendingConstraintStrength = 0.00f;
    this->bEnableEdgeConstraint = false;
    this->EdgeConstraintStrength = 0.00f;
}

