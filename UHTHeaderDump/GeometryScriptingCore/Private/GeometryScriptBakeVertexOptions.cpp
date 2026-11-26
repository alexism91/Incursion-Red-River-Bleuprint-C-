#include "GeometryScriptBakeVertexOptions.h"

FGeometryScriptBakeVertexOptions::FGeometryScriptBakeVertexOptions() {
    this->TopologyMode = EGeometryScriptBakeVertexTopology::CreateNew;
    this->bSplitAtNormalSeams = false;
    this->bSplitAtUVSeams = false;
    this->ProjectionDistance = 0.00f;
    this->bProjectionInWorldSpace = false;
}

