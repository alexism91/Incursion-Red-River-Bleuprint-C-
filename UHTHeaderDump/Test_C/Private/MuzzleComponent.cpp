#include "MuzzleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

UMuzzleComponent::UMuzzleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSuppressedAudio = false;
    this->FP_NiagaraMuzzleEffect = NULL;
    this->TP_NiagaraMuzzleEffect = NULL;
    this->OverheatEmissiveExtension = 4.00f;
    this->OverheatThreshold = 0.30f;
    this->OverheatMaterialFullHeat = 0.50f;
    this->OverheatEffectDelay = 0.50f;
    this->NiagaraOverheatEffect = NULL;
    this->MuzzleFlashNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleFlash"));
    this->FumesNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Fumes"));
}

void UMuzzleComponent::SpawnOverheatEffect_Implementation() {
}

void UMuzzleComponent::OnShotFired_Implementation() {
}

void UMuzzleComponent::OnHeatingValueChanged_Implementation(float NewHeatValue) {
}

FTransform UMuzzleComponent::GetMuzzleTransform() {
    return FTransform{};
}


