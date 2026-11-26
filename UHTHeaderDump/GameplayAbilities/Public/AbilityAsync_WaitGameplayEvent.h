#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityAsync.h"
#include "GameplayEventData.h"
#include "AbilityAsync_WaitGameplayEvent.generated.h"

class AActor;
class UAbilityAsync_WaitGameplayEvent;

UCLASS(Blueprintable, MinimalAPI)
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventReceivedDelegate, FGameplayEventData, Payload);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventReceivedDelegate EventReceived;
    
    UAbilityAsync_WaitGameplayEvent();

    UFUNCTION(BlueprintCallable)
    static UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);
    
};

