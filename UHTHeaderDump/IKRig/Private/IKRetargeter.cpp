#include "IKRetargeter.h"
#include "IKRetargetGlobalSettings.h"
#include "RetargetOpStack.h"
#include "RetargetRootSettings.h"

UIKRetargeter::UIKRetargeter() {
    this->Version = -1;
    this->SourceIKRigAsset = NULL;
    this->TargetIKRigAsset = NULL;
    this->CurrentSourceRetargetPose = TEXT("Default Pose");
    this->CurrentTargetRetargetPose = TEXT("Default Pose");
    this->bRetargetRoot = true;
    this->bRetargetFK = true;
    this->bRetargetIK = true;
    this->TargetActorOffset = 0.00f;
    this->TargetActorScale = 0.00f;
    this->RootSettings = CreateDefaultSubobject<URetargetRootSettings>(TEXT("RootSettings"));
    this->GlobalSettings = CreateDefaultSubobject<UIKRetargetGlobalSettings>(TEXT("GlobalSettings"));
    this->OpStack = CreateDefaultSubobject<URetargetOpStack>(TEXT("PostSettings"));
}

void UIKRetargeter::SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetRootSettings& NewRootSettings) {
}

void UIKRetargeter::SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FRetargetGlobalSettings& NewGlobalSettings) {
}

void UIKRetargeter::SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainSpeedPlantSettings& SpeedPlantSettings, const FName TargetChainName) {
}

void UIKRetargeter::SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainSettings& NewChainSettings, const FName TargetChainName) {
}

void UIKRetargeter::SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainIKSettings& IKSettings, const FName TargetChainName) {
}

void UIKRetargeter::SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainFKSettings& FKSettings, const FName TargetChainName) {
}

bool UIKRetargeter::HasTargetIKRig() const {
    return false;
}

bool UIKRetargeter::HasSourceIKRig() const {
    return false;
}

FTargetRootSettings UIKRetargeter::GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile) {
    return FTargetRootSettings{};
}

void UIKRetargeter::GetRootSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FTargetRootSettings& OutSettings) {
}

FRetargetGlobalSettings UIKRetargeter::GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile) {
    return FRetargetGlobalSettings{};
}

void UIKRetargeter::GetGlobalSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FRetargetGlobalSettings& OutSettings) {
}

FTargetChainSettings UIKRetargeter::GetChainUsingGoalFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName IKGoalName) {
    return FTargetChainSettings{};
}

FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, const FName TargetChainName) {
    return FTargetChainSettings{};
}

FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName TargetChainName, const FName OptionalProfileName) {
    return FTargetChainSettings{};
}


