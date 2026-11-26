#include "GeometrySelectionVisualizationProperties.h"

UGeometrySelectionVisualizationProperties::UGeometrySelectionVisualizationProperties() {
    this->bEnableShowTriangleROIBorder = false;
    this->bEnableShowEdgeSelectionVertices = false;
    this->SelectionElementType = (EGeometrySelectionElementType)0;
    this->SelectionTopologyType = (EGeometrySelectionTopologyType)0;
    this->bShowSelection = false;
    this->bShowTriangleROIBorder = true;
    this->bShowHidden = false;
    this->bShowEdgeSelectionVertices = false;
    this->LineThickness = 3.00f;
    this->PointSize = 5.00f;
    this->DepthBias = 0.20f;
    this->TriangleMaterial = NULL;
    this->LineMaterial = NULL;
    this->PointMaterial = NULL;
    this->TriangleMaterialShowingHidden = NULL;
    this->LineMaterialShowingHidden = NULL;
    this->PointMaterialShowingHidden = NULL;
}


