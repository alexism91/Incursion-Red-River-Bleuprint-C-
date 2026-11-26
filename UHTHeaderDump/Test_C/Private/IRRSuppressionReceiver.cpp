#include "IRRSuppressionReceiver.h"

UIRRSuppressionReceiver::UIRRSuppressionReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIRRSuppressionReceiver::SetSuppressionPlayerEffectScalar(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float AddToEffect) const {
}

void UIRRSuppressionReceiver::ReceiveSuppressionStateChanged_Implementation(const FIRRSuppressionData& InSuppressionData) {
}

void UIRRSuppressionReceiver::ReceiveSuppressionEvent_Implementation(const FIRRAISuppressionEventData& InSuppressionEvent) {
}

void UIRRSuppressionReceiver::OnPossess(AIRRBaseCharacter* Character, AController* Controller) {
}

void UIRRSuppressionReceiver::OnOwnerRevive(AActor* RevivedBy) {
}

void UIRRSuppressionReceiver::OnOwnerDeath(FIRRDamageData DamageData) {
}

FIRRSuppressionData UIRRSuppressionReceiver::GetSuppressionData() const {
    return FIRRSuppressionData{};
}


