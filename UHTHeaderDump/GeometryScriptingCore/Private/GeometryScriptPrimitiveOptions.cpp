#include "GeometryScriptPrimitiveOptions.h"

FGeometryScriptPrimitiveOptions::FGeometryScriptPrimitiveOptions() {
    this->PolygroupMode = EGeometryScriptPrimitivePolygroupMode::SingleGroup;
    this->bFlipOrientation = false;
    this->UVMode = EGeometryScriptPrimitiveUVMode::Uniform;
    this->MaterialID = 0;
}

