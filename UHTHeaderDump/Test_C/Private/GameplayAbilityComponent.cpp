#include "GameplayAbilityComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGameplayAbilityComponent::UGameplayAbilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TryRestartTickRate = 0.50f;
    this->GameplayTagsComponent = NULL;
}

bool UGameplayAbilityComponent::TryStopGameplayEffectByTag(FGameplayTag GameplayEffectTag) {
    return false;
}

bool UGameplayAbilityComponent::TryStopGameplayEffectByRef(USimpleGameplayEffect* GameplayEffect) {
    return false;
}

bool UGameplayAbilityComponent::TryStopGameplayEffectByClass(TSubclassOf<USimpleGameplayEffect> GameplayEffect) {
    return false;
}

bool UGameplayAbilityComponent::TryStopAbilityByTag(const FGameplayTag& AbilityTag) {
    return false;
}

bool UGameplayAbilityComponent::TryStartGameplayEffectByRef(USimpleGameplayEffect* GameplayEffect) {
    return false;
}

USimpleGameplayEffect* UGameplayAbilityComponent::TryStartGameplayEffectByClassAndReturn(TSubclassOf<USimpleGameplayEffect> GameplayEffect) {
    return NULL;
}

bool UGameplayAbilityComponent::TryStartGameplayEffectByClass(TSubclassOf<USimpleGameplayEffect> GameplayEffect) {
    return false;
}

bool UGameplayAbilityComponent::TryStartAbilityByRef(USimpleGameplayAbility* Ability) {
    return false;
}

bool UGameplayAbilityComponent::TryStartAbilityByClass(TSubclassOf<USimpleGameplayAbility> AbilityClass) {
    return false;
}

bool UGameplayAbilityComponent::TryStartAbility(USimpleGameplayAbility* GameplayAbility, bool bForcedGranted) {
    return false;
}

bool UGameplayAbilityComponent::TryStartAbilitiesByTag(const FGameplayTag& AbilityTag) {
    return false;
}

void UGameplayAbilityComponent::TryRestartAbilities() {
}

void UGameplayAbilityComponent::StopGameplayEffect(USimpleGameplayEffect* GameplayEffect) {
}

void UGameplayAbilityComponent::StopAbilityByClass(TSubclassOf<USimpleGameplayAbility> AbilityClass) {
}

void UGameplayAbilityComponent::StopAbilitiesByTag(const FGameplayTag& AbilityTag, bool bHoldReleased) {
}

void UGameplayAbilityComponent::StartGameplayEffect(USimpleGameplayEffect* GameplayEffect) {
}

void UGameplayAbilityComponent::RemoveBufferedAbilitiesByTag(const FGameplayTagContainer& AbilityTags) {
}

void UGameplayAbilityComponent::RemoveAttributeBuff_Server_Implementation(const FGameplayTag& Tag, const FSimpleAttributeBuff& Buff) {
}

void UGameplayAbilityComponent::RemoveAttributeBuff(const FGameplayTag& Tag, const FSimpleAttributeBuff& Buff) {
}

void UGameplayAbilityComponent::OnGameplayEffectUpdated(USimpleGameplayEffect* GameplayEffect) {
}

void UGameplayAbilityComponent::OnGameplayEffectFinished(USimpleGameplayEffect* GameplayEffect) {
}

void UGameplayAbilityComponent::OnGameplayEffectCommited(USimpleGameplayEffect* GameplayEffect) {
}

void UGameplayAbilityComponent::OnGameplayAbilityFinished(USimpleGameplayAbility* GameplayAbility, bool bSuccess) {
}

void UGameplayAbilityComponent::OnGameplayAbilityCommitted(USimpleGameplayAbility* GameplayAbility) {
}

bool UGameplayAbilityComponent::IsAbilityGrantedByTag(const FGameplayTag& AbilityTag) const {
    return false;
}

bool UGameplayAbilityComponent::IsAbilityActiveByTag(const FGameplayTag& AbilityTag) const {
    return false;
}

void UGameplayAbilityComponent::InterruptAbilitiesByTag(const FGameplayTagContainer& AbilityTags) {
}

bool UGameplayAbilityComponent::GiveAbility(USimpleGameplayAbility* GameplayAbility) {
    return false;
}

USimpleGameplayAttribute* UGameplayAbilityComponent::GetAttributeSet(const FGameplayTag& Tag) const {
    return NULL;
}

TArray<USimpleGameplayAttribute*> UGameplayAbilityComponent::GetAttributes() {
    return TArray<USimpleGameplayAttribute*>();
}

TArray<USimpleGameplayEffect*> UGameplayAbilityComponent::GetActiveGameplayEffects() {
    return TArray<USimpleGameplayEffect*>();
}

TArray<USimpleGameplayAbility*> UGameplayAbilityComponent::GetActiveAbilities() const {
    return TArray<USimpleGameplayAbility*>();
}

void UGameplayAbilityComponent::ExecuteAttributeModifier_Server_Implementation(const FGameplayTag& Tag, const FSimpleAttributeModifier& Modifier) {
}

void UGameplayAbilityComponent::ExecuteAttributeModifier(const FGameplayTag& Tag, const FSimpleAttributeModifier& Modifier) {
}

void UGameplayAbilityComponent::ClearAllAbilities() {
}

bool UGameplayAbilityComponent::ClearAbility(USimpleGameplayAbility* GameplayAbility) {
    return false;
}

bool UGameplayAbilityComponent::CanStartGameplayEffectByRef(USimpleGameplayEffect* GameplayEffect) {
    return false;
}

bool UGameplayAbilityComponent::CanStartAbilityByTag(const FGameplayTag& AbilityTag, bool bForcedGranted) const {
    return false;
}

bool UGameplayAbilityComponent::CanStartAbility(USimpleGameplayAbility* GameplayAbility, bool bForcedGranted) const {
    return false;
}

void UGameplayAbilityComponent::AddAttributeBuff_Server_Implementation(const FGameplayTag& Tag, const FSimpleAttributeBuff& Buff) {
}

void UGameplayAbilityComponent::AddAttributeBuff(const FGameplayTag& Tag, const FSimpleAttributeBuff& Buff) {
}

void UGameplayAbilityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilityComponent, Attributes);
    DOREPLIFETIME(UGameplayAbilityComponent, DefaultEffects);
}


