#include "MaterialCachedExpressionData.h"

FMaterialCachedExpressionData::FMaterialCachedExpressionData() {
    this->FunctionInfosStateCRC = 0;
    this->bHasMaterialLayers = false;
    this->bHasRuntimeVirtualTextureOutput = false;
    this->bHasFirstPersonOutput = false;
    this->bHasMaterialCacheOutput = false;
    this->bMaterialCacheHasNonUVDerivedExpression = false;
    this->bHasSceneColor = false;
    this->bHasPerInstanceCustomData = false;
    this->bHasPerInstanceRandom = false;
    this->bHasVertexInterpolator = false;
    this->bHasCustomizedUVs = false;
    this->bHasMeshPaintTexture = false;
    this->bHasWorldPosition = false;
    this->PropertyConnectedBitmask = 0;
    this->PropertyConnectedMask = 0;
}

