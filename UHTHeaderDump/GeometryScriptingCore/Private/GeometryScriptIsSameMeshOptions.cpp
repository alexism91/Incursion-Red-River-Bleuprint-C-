#include "GeometryScriptIsSameMeshOptions.h"

FGeometryScriptIsSameMeshOptions::FGeometryScriptIsSameMeshOptions() {
    this->bCheckConnectivity = false;
    this->bCheckEdgeIDs = false;
    this->bCheckNormals = false;
    this->bCheckColors = false;
    this->bCheckUVs = false;
    this->bCheckGroups = false;
    this->bCheckAttributes = false;
    this->Epsilon = 0.00f;
}

