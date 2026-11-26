#include "MontageComponent.h"

UMontageComponent::UMontageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSupportFirstPerson = false;
    this->MeshComponent = NULL;
    this->bLocalPlayer = false;
    this->bPredicted = false;
    this->MontageInstanceID = 0;
}

void UMontageComponent::StopSingleMontage_Server_Implementation(FName LinkedAnimGraph, UAnimMontage* Montage, bool All, float BlendOutTime) {
}

void UMontageComponent::StopSingleMontage_Networked(FName LinkedAnimGraph, UAnimMontage* Montage, float BlendOutTime, bool All) {
}

void UMontageComponent::StopSingleMontage_MC_Implementation(FName LinkedAnimGraph, UAnimMontage* Montage, float BlendOutTime, bool All) {
}

void UMontageComponent::StopCharacterMontage_Server_Implementation(AActor* Weapon, FName LinkedAnimGraph, FCharacterMontageSet CharacterMontages, float BlendOutTime, bool All) {
}

void UMontageComponent::StopCharacterMontage_Networked(AActor* Weapon, FName LinkedAnimGraph, FCharacterMontageSet CharacterMontages, float BlendOutTime, bool All) {
}

void UMontageComponent::StopCharacterMontage_MC_Implementation(AActor* Weapon, FName LinkedAnimGraph, FCharacterMontageSet CharacterMontages, float BlendOutTime, bool All) {
}

void UMontageComponent::PlaySingleMontage_Server_Implementation(FName LinkedAnimGraph, FName MontageSection, UAnimMontage* Montage, float PlayRate, bool StopPreviousMontage) {
}

void UMontageComponent::PlaySingleMontage_Networked(FName LinkedAnimGraph, FName MontageSection, UAnimMontage* Montage, float PlayRate, bool StopPreviousMontage, bool Predicted) {
}

void UMontageComponent::PlaySingleMontage_MC_Implementation(FName LinkedAnimGraph, FName MontageSection, UAnimMontage* Montage, float PlayRate, bool StopPreviousMontage) {
}

void UMontageComponent::PlayCharacterMontage_Server_Implementation(AActor* Weapon, FName LinkedAnimGraph, FName MontageSection, FCharacterMontageSet CharacterMontages, float PlayRate, bool StopPreviousMontage, bool SyncAnimLength) {
}

void UMontageComponent::PlayCharacterMontage_Networked(AActor* Weapon, FName LinkedAnimGraph, FName MontageSection, FCharacterMontageSet CharacterMontages, float PlayRate, bool StopPreviousMontage, bool SyncAnimLength, bool Predicted) {
}

void UMontageComponent::PlayCharacterMontage_MC_Implementation(AActor* Weapon, FName LinkedAnimGraph, FName MontageSection, FCharacterMontageSet CharacterMontages, float PlayRate, bool StopPreviousMontage, bool SyncAnimLength) {
}

bool UMontageComponent::IsMontagePlaying(FName LinkedAnimGraph) {
    return false;
}


