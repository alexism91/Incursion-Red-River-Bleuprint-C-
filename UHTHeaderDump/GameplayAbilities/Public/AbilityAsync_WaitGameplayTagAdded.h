#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityAsync_WaitGameplayTag.h"
#include "AbilityAsync_WaitGameplayTag.h"
#include "AbilityAsync_WaitGameplayTagAdded.generated.h"

class AActor;
class UAbilityAsync_WaitGameplayTagAdded;

UCLASS(Blueprintable, MinimalAPI)
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityAsync_WaitGameplayTag::FAsyncWaitGameplayTagDelegate Added;
    
    UAbilityAsync_WaitGameplayTagAdded();

    UFUNCTION(BlueprintCallable)
    static UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce);
    
};

