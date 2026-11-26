#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "AbilityTask.h"
#include "EWaitGameplayTagQueryTriggerCondition.h"
#include "WaitGameplayTagQueryDelegateDelegate.h"
#include "AbilityTask_WaitGameplayTagQuery.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAbilityTask_WaitGameplayTagQuery;
class UGameplayAbility;

UCLASS(Blueprintable, MinimalAPI)
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayTagQueryDelegate Triggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OptionalExternalTarget;
    
public:
    UAbilityTask_WaitGameplayTagQuery();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(UGameplayAbility* OwningAbility, const FGameplayTagQuery TagQuery, const AActor* InOptionalExternalTarget, const EWaitGameplayTagQueryTriggerCondition TriggerCondition, const bool bOnlyTriggerOnce);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTargetTags(const FGameplayTag Tag, int32 NewCount);
    
};

