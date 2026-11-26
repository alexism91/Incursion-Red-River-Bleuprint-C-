#include "NiagaraStatelessModule_ShapeLocation.h"

UNiagaraStatelessModule_ShapeLocation::UNiagaraStatelessModule_ShapeLocation() {
    this->ShapePrimitive = ENSM_ShapePrimitive::Sphere;
    this->bBoxSurfaceOnly = false;
    this->BoxSurfaceExpansion = ENSM_SurfaceExpansionMode::Centered;
    this->bPlaneEdgesOnly = false;
    this->PlaneEdgeExpansion = ENSM_SurfaceExpansionMode::Centered;
}


