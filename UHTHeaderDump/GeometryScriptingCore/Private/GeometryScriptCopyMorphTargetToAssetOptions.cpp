#include "GeometryScriptCopyMorphTargetToAssetOptions.h"

FGeometryScriptCopyMorphTargetToAssetOptions::FGeometryScriptCopyMorphTargetToAssetOptions() {
    this->bOverwriteExistingTarget = false;
    this->bEmitTransaction = false;
    this->bDeferMeshPostEditChange = false;
    this->bCopyNormals = false;
}

