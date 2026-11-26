#include "SimpleGameplayAttribute.h"
#include "Net/UnrealNetwork.h"

USimpleGameplayAttribute::USimpleGameplayAttribute() {
}

void USimpleGameplayAttribute::SetBaseValue(float NewValue) {
}

void USimpleGameplayAttribute::RemoveBuff(FSimpleAttributeBuff Buff) {
}

void USimpleGameplayAttribute::OnRep_Data() {
}

void USimpleGameplayAttribute::OnRep_Buffs() {
}

float USimpleGameplayAttribute::GetMinValue() const {
    return 0.0f;
}

float USimpleGameplayAttribute::GetMaxValue() const {
    return 0.0f;
}

float USimpleGameplayAttribute::GetCurrentValue() const {
    return 0.0f;
}

float USimpleGameplayAttribute::GetCurrentMinValue() {
    return 0.0f;
}

float USimpleGameplayAttribute::GetCurrentMaxValue() {
    return 0.0f;
}

TArray<FSimpleAttributeBuff> USimpleGameplayAttribute::GetBuffs() const {
    return TArray<FSimpleAttributeBuff>();
}

float USimpleGameplayAttribute::GetBaseValue() const {
    return 0.0f;
}

void USimpleGameplayAttribute::ExecuteAttributeModifier(FSimpleAttributeModifier Modifier) {
}

void USimpleGameplayAttribute::AddBuff(FSimpleAttributeBuff Buff) {
}

void USimpleGameplayAttribute::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USimpleGameplayAttribute, BaseData);
    DOREPLIFETIME(USimpleGameplayAttribute, Buffs);
}


