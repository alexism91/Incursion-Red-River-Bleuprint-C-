#include "MeshTopologySelectionMechanic.h"

UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic() {
    this->Properties = NULL;
    this->HoverBehavior = NULL;
    this->ClickOrDragBehavior = NULL;
    this->MarqueeMechanic = NULL;
    this->MarqueeSelectionUpdateType = EMarqueeSelectionUpdateType::OnDrag;
    this->PreviewGeometryActor = NULL;
    this->DrawnTriangleSetComponent = NULL;
    this->HighlightedFaceMaterial = NULL;
}


