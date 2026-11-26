#include "AdvancedAkSpatialAudioVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRSignificanceSystem -ObjectName=IRRBrushSignificanceComponent -FallbackName=IRRBrushSignificanceComponent

AAdvancedAkSpatialAudioVolume::AAdvancedAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseOptimization = true;
    this->SignificanceComponent = CreateDefaultSubobject<UIRRBrushSignificanceComponent>(TEXT("SignificanceComponent"));
    this->bOverrideEnvironment = false;
    this->EnvironmentOverride = EIRRAcousticEnvironment::ExteriorField;
}

void AAdvancedAkSpatialAudioVolume::SetSpatialAudioActive(bool bActive) {
}

void AAdvancedAkSpatialAudioVolume::OnSignificanceChanged_Implementation(int32 Level, bool bNewHidden) {
}

float AAdvancedAkSpatialAudioVolume::GetRoomVolumeM3() const {
    return 0.0f;
}

EIRRAcousticEnvironment AAdvancedAkSpatialAudioVolume::GetAcousticEnvironment() const {
    return EIRRAcousticEnvironment::ExteriorField;
}


