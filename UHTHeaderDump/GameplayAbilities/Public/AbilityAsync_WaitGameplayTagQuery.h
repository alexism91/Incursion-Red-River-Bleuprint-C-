#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "AbilityAsync.h"
#include "AsyncWaitGameplayTagQueryDelegateDelegate.h"
#include "EWaitGameplayTagQueryTriggerCondition.h"
#include "AbilityAsync_WaitGameplayTagQuery.generated.h"

class AActor;
class UAbilityAsync_WaitGameplayTagQuery;

UCLASS(Blueprintable, MinimalAPI)
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncWaitGameplayTagQueryDelegate Triggered;
    
    UAbilityAsync_WaitGameplayTagQuery();

    UFUNCTION(BlueprintCallable)
    static UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(AActor* TargetActor, const FGameplayTagQuery TagQuery, const EWaitGameplayTagQueryTriggerCondition TriggerCondition, const bool bOnlyTriggerOnce);
    
};

