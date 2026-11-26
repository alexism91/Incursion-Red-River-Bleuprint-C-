#include "NiagaraBakerOutputStaticMesh.h"

UNiagaraBakerOutputStaticMesh::UNiagaraBakerOutputStaticMesh() {
    this->OutputName = TEXT("Default__NiagaraBakerOutputStaticMesh");
    this->FramesAssetPathFormat = TEXT("{AssetFolder}/{AssetName}_BakedFrame_{OutputName}_{FrameIndex}");
}


