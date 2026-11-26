#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityAsync_WaitGameplayTag.h"
#include "AbilityAsync_WaitGameplayTag.h"
#include "AbilityAsync_WaitGameplayTagRemoved.generated.h"

class AActor;
class UAbilityAsync_WaitGameplayTagRemoved;

UCLASS(Blueprintable, MinimalAPI)
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityAsync_WaitGameplayTag::FAsyncWaitGameplayTagDelegate Removed;
    
    UAbilityAsync_WaitGameplayTagRemoved();

    UFUNCTION(BlueprintCallable)
    static UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce);
    
};

