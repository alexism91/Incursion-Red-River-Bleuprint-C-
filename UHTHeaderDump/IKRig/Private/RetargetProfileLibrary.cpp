#include "RetargetProfileLibrary.h"

URetargetProfileLibrary::URetargetProfileLibrary() {
}

UIKRetargetOpControllerBase* URetargetProfileLibrary::GetOpControllerFromRetargetProfile(FRetargetProfile& InRetargetProfile, const FName InRetargetOpName) {
    return NULL;
}

FRetargetProfile URetargetProfileLibrary::CopyRetargetProfileFromRetargetAsset(const UIKRetargeter* InRetargetAsset) {
    return FRetargetProfile{};
}


