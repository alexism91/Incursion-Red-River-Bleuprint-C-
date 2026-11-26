#include "CharacterAnimInstance.h"

UCharacterAnimInstance::UCharacterAnimInstance() {
    this->bInCover = false;
    this->bUseTurnInPlace = false;
}

void UCharacterAnimInstance::SetMultithreading(bool Value) {
}

void UCharacterAnimInstance::SetAutonomousTick(bool Value) {
}

void UCharacterAnimInstance::PlayTransition(FAnimParameters AnimParameters) {
}

bool UCharacterAnimInstance::IsAnyMontageInSlotPlaying(FName SlotName) {
    return false;
}


