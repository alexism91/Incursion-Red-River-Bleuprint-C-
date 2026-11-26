#include "CanvasRenderTarget2D.h"
#include "Templates/SubclassOf.h"

UCanvasRenderTarget2D::UCanvasRenderTarget2D() {
    this->SampleCount = ETextureRenderTargetSampleCount::RTSC_1;
    this->bShouldClearRenderTargetOnReceiveUpdate = true;
}

void UCanvasRenderTarget2D::UpdateResource() {
}

void UCanvasRenderTarget2D::SetSampleCount(ETextureRenderTargetSampleCount InSampleCount) {
}


void UCanvasRenderTarget2D::GetSize(int32& Width, int32& Height) {
}

ETextureRenderTargetSampleCount UCanvasRenderTarget2D::GetSampleCount() const {
    return ETextureRenderTargetSampleCount::RTSC_1;
}

UCanvasRenderTarget2D* UCanvasRenderTarget2D::CreateCanvasRenderTarget2D(UObject* WorldContextObject, TSubclassOf<UCanvasRenderTarget2D> CanvasRenderTarget2DClass, int32 Width, int32 Height) {
    return NULL;
}


