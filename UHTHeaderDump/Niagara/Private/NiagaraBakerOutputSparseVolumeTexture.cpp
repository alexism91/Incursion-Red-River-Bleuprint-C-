#include "NiagaraBakerOutputSparseVolumeTexture.h"

UNiagaraBakerOutputSparseVolumeTexture::UNiagaraBakerOutputSparseVolumeTexture() {
    this->OutputName = TEXT("Default__NiagaraBakerOutputSparseVolumeTexture");
    this->SparseVolumeTextureAssetPathFormat = TEXT("{AssetFolder}/{AssetName}_BakedSVT_{OutputName}");
    this->bEnableLoopedOutput = false;
    this->LoopedSparseVolumeTextureAssetPathFormat = TEXT("{AssetFolder}/{AssetName}_Looped_BakedSVT_{OutputName}");
    this->StartTime = 4.00f;
    this->BlendDuration = 2.00f;
}


