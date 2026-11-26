#include "GeometryScriptConstrainedDelaunayTriangulationOptions.h"

FGeometryScriptConstrainedDelaunayTriangulationOptions::FGeometryScriptConstrainedDelaunayTriangulationOptions() {
    this->ConstrainedEdgesFillMode = EGeometryScriptPolygonFillMode::All;
    this->bValidateEdgesInResult = false;
    this->bRemoveDuplicateVertices = false;
}

