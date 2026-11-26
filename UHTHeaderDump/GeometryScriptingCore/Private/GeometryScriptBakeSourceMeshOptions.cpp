#include "GeometryScriptBakeSourceMeshOptions.h"

FGeometryScriptBakeSourceMeshOptions::FGeometryScriptBakeSourceMeshOptions() {
    this->SourceNormalMap = NULL;
    this->SourceNormalUVLayer = 0;
    this->SourceNormalSpace = EGeometryScriptBakeNormalSpace::Tangent;
}

