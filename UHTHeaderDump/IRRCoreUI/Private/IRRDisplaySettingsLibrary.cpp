#include "IRRDisplaySettingsLibrary.h"

UIRRDisplaySettingsLibrary::UIRRDisplaySettingsLibrary() {
}

bool UIRRDisplaySettingsLibrary::IsResolutionSelectable(TEnumAsByte<EWindowMode::Type> WindowMode) {
    return false;
}

bool UIRRDisplaySettingsLibrary::IsExclusiveFullscreenAvailable() {
    return false;
}

TArray<FIntPoint> UIRRDisplaySettingsLibrary::GetSelectableResolutions(TEnumAsByte<EWindowMode::Type> WindowMode) {
    return TArray<FIntPoint>();
}

int32 UIRRDisplaySettingsLibrary::GetMaxTextureQualityForVideoMemory() {
    return 0;
}

TEnumAsByte<EWindowMode::Type> UIRRDisplaySettingsLibrary::GetAllowedWindowMode(TEnumAsByte<EWindowMode::Type> WindowMode) {
    return EWindowMode::Fullscreen;
}

FIntPoint UIRRDisplaySettingsLibrary::FitWindowedResolution(FIntPoint Resolution) {
    return FIntPoint{};
}

bool UIRRDisplaySettingsLibrary::CorrectDisplaySettings() {
    return false;
}

bool UIRRDisplaySettingsLibrary::ClampTextureQualityToVideoMemory(bool bApplyAndSave) {
    return false;
}


