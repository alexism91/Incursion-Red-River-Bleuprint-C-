#include "MediaCaptureOptions.h"

FMediaCaptureOptions::FMediaCaptureOptions() {
    this->bAutoRestartOnSourceSizeChange = false;
    this->OverrunAction = EMediaCaptureOverrunAction::Flush;
    this->Crop = EMediaCaptureCroppingType::None;
    this->ResizeMethod = EMediaCaptureResizeMethod::None;
    this->bSkipFrameWhenRunningExpensiveTasks = false;
    this->bConvertToDesiredPixelFormat = false;
    this->bForceAlphaToOneOnConversion = false;
    this->bApplyLinearToSRGBConversion = false;
    this->bAutostopOnCapture = false;
    this->NumberOfFramesToCapture = 0;
    this->CapturePhase = EMediaCapturePhase::BeforePostProcessing;
}

