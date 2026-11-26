#include "SimpleGameplayAttribute_Health.h"
#include "Net/UnrealNetwork.h"

USimpleGameplayAttribute_Health::USimpleGameplayAttribute_Health() {
    this->RevivedBy = NULL;
    this->bIsDead = false;
}

void USimpleGameplayAttribute_Health::SetLastInstigatedDamageData(FIRRDamageData InLastDamageData) {
}

void USimpleGameplayAttribute_Health::SetLastDamageData(FIRRDamageData InLastDamageData) {
}

void USimpleGameplayAttribute_Health::SetDeathData(FIRRDamageData InDeathData) {
}

void USimpleGameplayAttribute_Health::OnRep_DeathData() {
}

void USimpleGameplayAttribute_Health::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USimpleGameplayAttribute_Health, DeathData);
}


