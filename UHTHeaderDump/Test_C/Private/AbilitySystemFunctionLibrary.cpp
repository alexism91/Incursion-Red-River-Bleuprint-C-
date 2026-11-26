#include "AbilitySystemFunctionLibrary.h"

UAbilitySystemFunctionLibrary::UAbilitySystemFunctionLibrary() {
}

void UAbilitySystemFunctionLibrary::StopAllActiveAbilities(AActor* Actor) {
}

bool UAbilitySystemFunctionLibrary::SendGameplayEventToActor_New(const AActor* Actor, const FGameplayTag& GameplayTag, bool bValue) {
    return false;
}

void UAbilitySystemFunctionLibrary::SendGameplayEventToActor(AActor* Actor, FGameplayTag GameplayTag, EGameplayTagEventHandle EventType) {
}

void UAbilitySystemFunctionLibrary::RemoveAttributeBuff(AActor* Actor, FGameplayTag Tag, FSimpleAttributeBuff Buff, bool bReplicate) {
}

bool UAbilitySystemFunctionLibrary::HasPlayerGameplayTags(const UObject* WorldContextObject, FGameplayTagContainer GameplayTags, bool bExactMatch) {
    return false;
}

bool UAbilitySystemFunctionLibrary::HasGameplayTags(AActor* Actor, FGameplayTagContainer GameplayTags, bool bExactMatch) {
    return false;
}

USimpleGameplayAttribute_Health* UAbilitySystemFunctionLibrary::GetHealthAttributeSet(const AActor* Actor) {
    return NULL;
}

UGameplayTagsComponent* UAbilitySystemFunctionLibrary::GetGameplayTagsComponent(const AActor* Actor) {
    return NULL;
}

UGameplayAbilityComponent* UAbilitySystemFunctionLibrary::GetGameplayAbilityComponent(const AActor* Actor) {
    return NULL;
}

USimpleGameplayAttribute* UAbilitySystemFunctionLibrary::GetAttributeSet(AActor* Actor, FGameplayTag Tag) {
    return NULL;
}

void UAbilitySystemFunctionLibrary::ExecuteAttributeModifier(AActor* Actor, FGameplayTag Tag, FSimpleAttributeModifier Modifier, bool bReplicate) {
}

void UAbilitySystemFunctionLibrary::AddAttributeBuff(AActor* Actor, FGameplayTag Tag, FSimpleAttributeBuff Buff, bool bReplicate) {
}


