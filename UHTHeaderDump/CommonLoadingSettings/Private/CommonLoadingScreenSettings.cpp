#include "CommonLoadingScreenSettings.h"

UCommonLoadingScreenSettings::UCommonLoadingScreenSettings() {
    this->LoadingScreenZOrder = 10000;
    this->SplashScreenType = ESplashScreenType::BLACK;
    this->bDisableSplashLoadingScreen = true;
    this->bForceTickLoadingScreenEvenInEditor = true;
    this->ShowLoadingScreenAdditionalSecs = 10.00f;
    this->bWaitForTextureStreaming = true;
    this->StreamingWarmupFrames = 8;
    this->StreamingSettledUpdates = 2;
    this->StreamingHoldTailSecs = 1.00f;
    this->bWaitForGrass = true;
    this->GrassSettledUpdates = 3;
    this->NaniteSettleSecs = 3.00f;
    this->bNanitePrefetch = true;
    this->NanitePrefetchRadius = 15000.00f;
    this->NanitePrefetchMaxMeshes = 256;
    this->ShowSplashScreenAdditionalSecs = 2.00f;
    this->LoadingScreenHeartbeatHangDuration = 0.00f;
    this->LogLoadingScreenHeartbeatInterval = 5.00f;
    this->BlockedMapNames.AddDefaulted(3);
    this->SplashScreenStretch = EStretch::ScaleToFitX;
    this->SplashScreenStretchDirection = EStretchDirection::Both;
    this->SplashScreenLoadingText = FText::FromString(TEXT("LOADING..."));
    this->bLogLoadingScreenReasonEveryFrame = false;
    this->bForceLoadingScreenVisible = false;
    this->bShowLoadingScreenAdditionalSecsEvenInEditor = true;
    this->bSkipWarmupHoldsInEditor = true;
}


