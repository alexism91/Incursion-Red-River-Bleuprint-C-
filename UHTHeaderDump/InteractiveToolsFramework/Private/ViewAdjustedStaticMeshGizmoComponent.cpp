#include "ViewAdjustedStaticMeshGizmoComponent.h"

UViewAdjustedStaticMeshGizmoComponent::UViewAdjustedStaticMeshGizmoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GizmoViewContext = NULL;
    this->SubstituteInteractionComponent = NULL;
    this->HoverOverrideMaterial = NULL;
}


