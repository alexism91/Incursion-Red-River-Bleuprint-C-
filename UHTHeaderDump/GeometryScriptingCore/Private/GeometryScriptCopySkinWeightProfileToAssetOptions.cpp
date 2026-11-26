#include "GeometryScriptCopySkinWeightProfileToAssetOptions.h"

FGeometryScriptCopySkinWeightProfileToAssetOptions::FGeometryScriptCopySkinWeightProfileToAssetOptions() {
    this->bOverwriteExistingProfile = false;
    this->bEmitTransaction = false;
    this->bDeferMeshPostEditChange = false;
}

