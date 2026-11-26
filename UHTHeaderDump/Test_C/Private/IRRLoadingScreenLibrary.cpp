#include "IRRLoadingScreenLibrary.h"

UIRRLoadingScreenLibrary::UIRRLoadingScreenLibrary() {
}

void UIRRLoadingScreenLibrary::StopLoadingScreen(const UObject* WorldContextObject) {
}

void UIRRLoadingScreenLibrary::StartLoadingScreen(const UObject* WorldContextObject, const FString& LevelName) {
}

void UIRRLoadingScreenLibrary::SetEnableLoadingScreen(bool bIsEnableLoadingScreen) {
}

UTexture2D* UIRRLoadingScreenLibrary::LoadRandomBackground(const FIRRLoadingScreenData& LoadingScreenData) {
    return NULL;
}

bool UIRRLoadingScreenLibrary::IsPrecompiling() {
    return false;
}

UCommonLoadingScreenSettings* UIRRLoadingScreenLibrary::GetLoadingScreenSettings() {
    return NULL;
}

bool UIRRLoadingScreenLibrary::GetIsEnableLoadingScreen() {
    return false;
}


