#include "GeometryCollectionTransferVertexScalarAttributeNode.h"

FGeometryCollectionTransferVertexScalarAttributeNode::FGeometryCollectionTransferVertexScalarAttributeNode() {
    this->BoundingVolumeType = EDataflowTransferNodeBoundingVolume::Dataflow_Transfer_Vertex;
    this->SampleScale = EDataflowTransferNodeSampleScale::Dataflow_Transfer_Component_Edge;
    this->Falloff = EDataflowTransferNodeFalloff::Dataflow_Transfer_Squared;
    this->FalloffThreshold = 0.00f;
    this->EdgeMultiplier = 0.00f;
    this->BoundMultiplier = 0.00f;
}

