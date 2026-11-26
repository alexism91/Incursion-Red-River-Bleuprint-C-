#include "SimpleGameplayAbility_CheckChamber.h"

USimpleGameplayAbility_CheckChamber::USimpleGameplayAbility_CheckChamber() {
    this->bBufferAbility = true;
    this->StopAbilityMontage = true;
    this->ChamberedNotifyName = TEXT("Chambered");
    this->ChamberMontage = NULL;
}

void USimpleGameplayAbility_CheckChamber::OnChamberNotifyBegin(FName NotifyName) {
}

void USimpleGameplayAbility_CheckChamber::OnChamberMontageInterrupted(FName NotifyName) {
}

void USimpleGameplayAbility_CheckChamber::OnChamberMontageBlendOut(FName NotifyName) {
}


