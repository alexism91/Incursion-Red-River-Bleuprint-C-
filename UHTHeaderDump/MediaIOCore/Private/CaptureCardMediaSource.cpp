#include "CaptureCardMediaSource.h"
#include "BobDeinterlacer.h"

UCaptureCardMediaSource::UCaptureCardMediaSource() {
    this->bRenderJIT = true;
    this->bFramelock = false;
    this->EvaluationType = EMediaIOSampleEvaluationType::PlatformTime;
    this->Deinterlacer = CreateDefaultSubobject<UBobDeinterlacer>(TEXT("Deinterlacer"));
    this->InterlaceFieldOrder = EMediaIOInterlaceFieldOrder::TopFieldFirst;
    this->bOverrideSourceEncoding = true;
    this->OverrideSourceEncoding = EMediaIOCoreSourceEncoding::Linear;
    this->bOverrideSourceColorSpace = true;
    this->OverrideSourceColorSpace = ETextureColorSpace::TCS_sRGB;
}


