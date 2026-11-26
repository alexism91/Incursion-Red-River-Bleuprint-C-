#include "CaptureCharacter.h"
#include "RetargetComponent.h"

ACaptureCharacter::ACaptureCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RetargetAsset = NULL;
    this->bForceAllSkeletalMeshesToFollowLeader = true;
    this->RetargetComponent = CreateDefaultSubobject<URetargetComponent>(TEXT("RetargetComponent"));
}

void ACaptureCharacter::SetSourcePerformer(ACapturePerformer* InPerformer) {
}

void ACaptureCharacter::SetRetargetAsset(UIKRetargeter* InRetargetAsset) {
}

void ACaptureCharacter::SetForceAllSkeletalMeshesToFollowLeader(bool InFollowLeader) {
}

void ACaptureCharacter::SetCustomRetargetProfile(FRetargetProfile InProfile) {
}

FRetargetProfile ACaptureCharacter::GetCustomRetargetProfile() {
    return FRetargetProfile{};
}


