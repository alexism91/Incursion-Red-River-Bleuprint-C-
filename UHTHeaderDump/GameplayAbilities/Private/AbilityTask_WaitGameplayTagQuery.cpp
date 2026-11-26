#include "AbilityTask_WaitGameplayTagQuery.h"

UAbilityTask_WaitGameplayTagQuery::UAbilityTask_WaitGameplayTagQuery() {
    this->OptionalExternalTarget = NULL;
}

UAbilityTask_WaitGameplayTagQuery* UAbilityTask_WaitGameplayTagQuery::WaitGameplayTagQuery(UGameplayAbility* OwningAbility, const FGameplayTagQuery TagQuery, const AActor* InOptionalExternalTarget, const EWaitGameplayTagQueryTriggerCondition TriggerCondition, const bool bOnlyTriggerOnce) {
    return NULL;
}

void UAbilityTask_WaitGameplayTagQuery::UpdateTargetTags(const FGameplayTag Tag, int32 NewCount) {
}


