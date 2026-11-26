#include "GroupEdgeInsertionProperties.h"

UGroupEdgeInsertionProperties::UGroupEdgeInsertionProperties() {
    this->InsertionMode = EGroupEdgeInsertionMode::PlaneCut;
    this->bContinuousInsertion = true;
    this->VertexTolerance = 0.00f;
}


