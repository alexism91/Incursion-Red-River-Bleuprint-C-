#include "QuestMessageComponent.h"

UQuestMessageComponent::UQuestMessageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UQuestMessageComponent::SendQuestMessage(FGameplayTag MessageTag, FQuestEventPayload Payload, AActor* Recipient) {
}

void UQuestMessageComponent::BroadcastQuestMessage(FGameplayTag MessageTag, FQuestEventPayload Payload) {
}


