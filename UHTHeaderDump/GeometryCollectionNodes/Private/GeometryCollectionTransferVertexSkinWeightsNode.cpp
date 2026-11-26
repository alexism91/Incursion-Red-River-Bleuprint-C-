#include "GeometryCollectionTransferVertexSkinWeightsNode.h"

FGeometryCollectionTransferVertexSkinWeightsNode::FGeometryCollectionTransferVertexSkinWeightsNode() {
    this->TransferMethod = EDataflowTransferVertexAttributeNodeTransferMethod::Component;
    this->BoundingVolumeType = EDataflowTransferVertexAttributeNodeBoundingVolume::Vertex;
    this->SourceScale = EDataflowTransferVertexAttributeNodeSourceScale::Component_Edge;
    this->Falloff = EDataflowTransferVertexAttributeNodeFalloff::Squared;
    this->FalloffThreshold = 0.00f;
    this->EdgeMultiplier = 0.00f;
    this->BoundMultiplier = 0.00f;
}

