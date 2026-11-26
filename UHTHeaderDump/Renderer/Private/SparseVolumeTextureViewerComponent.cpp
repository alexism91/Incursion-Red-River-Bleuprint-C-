#include "SparseVolumeTextureViewerComponent.h"

USparseVolumeTextureViewerComponent::USparseVolumeTextureViewerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SparseVolumeTexturePreview = NULL;
    this->Frame = 0.00f;
    this->FrameRate = 24.00f;
    this->bPlaying = false;
    this->bLooping = false;
    this->bReversePlayback = false;
    this->bBlockingStreamingRequests = false;
    this->bApplyPerFrameTransforms = true;
    this->bPivotAtCentroid = false;
    this->VoxelSize = 1.00f;
    this->PreviewAttribute = ESVTPA_AttributesA_R;
    this->MipLevel = 0;
    this->Extinction = 0.03f;
}


