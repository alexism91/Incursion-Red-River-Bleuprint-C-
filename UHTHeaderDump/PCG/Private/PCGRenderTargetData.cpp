#include "PCGRenderTargetData.h"

UPCGRenderTargetData::UPCGRenderTargetData() {
    this->RenderTarget = NULL;
    this->bOwnsRenderTarget = false;
}

void UPCGRenderTargetData::Initialize(UTextureRenderTarget2D* InRenderTarget, const FTransform& InTransform, bool bInSkipReadbackToCPU, bool bInTakeOwnershipOfRenderTarget) {
}


