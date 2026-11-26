#include "GeometryScriptMorphologyOptions.h"

FGeometryScriptMorphologyOptions::FGeometryScriptMorphologyOptions() {
    this->bUseSeparateMeshGrid = false;
    this->Operation = EGeometryScriptMorphologicalOpType::Dilate;
    this->Distance = 0.00f;
}

