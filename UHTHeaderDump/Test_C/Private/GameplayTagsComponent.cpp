#include "GameplayTagsComponent.h"
#include "Net/UnrealNetwork.h"

UGameplayTagsComponent::UGameplayTagsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGameplayTagsComponent::UpdateReplicatedTags() {
}

void UGameplayTagsComponent::UpdateGameplayTags(const FGameplayTagContainer ToAddAbilities, const FGameplayTagContainer ToRemoveAbilities) {
}

void UGameplayTagsComponent::ReplicateGameplayTags_Implementation(FGameplayTagContainer NewGameplayTags) {
}

void UGameplayTagsComponent::OnRep_OwnedGameplayTags() {
}

bool UGameplayTagsComponent::HasGameplayTags(const FGameplayTagContainer CompareToTags, bool ExactMatch) {
    return false;
}

FGameplayTagContainer UGameplayTagsComponent::GetOwnedGameplayTags() {
    return FGameplayTagContainer{};
}

void UGameplayTagsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayTagsComponent, RepOwnedGameplayTags);
}


