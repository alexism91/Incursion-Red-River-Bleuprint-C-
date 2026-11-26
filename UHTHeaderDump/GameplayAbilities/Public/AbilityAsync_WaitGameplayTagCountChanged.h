#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityAsync.h"
#include "AbilityAsync_WaitGameplayTagCountChanged.generated.h"

class AActor;
class UAbilityAsync_WaitGameplayTagCountChanged;

UCLASS(Blueprintable, MinimalAPI)
class UAbilityAsync_WaitGameplayTagCountChanged : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncWaitGameplayTagCountDelegate, int32, TagCount);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncWaitGameplayTagCountDelegate TagCountChanged;
    
    UAbilityAsync_WaitGameplayTagCountChanged();

    UFUNCTION(BlueprintCallable)
    static UAbilityAsync_WaitGameplayTagCountChanged* WaitGameplayTagCountChangedOnActor(AActor* TargetActor, FGameplayTag Tag);
    
};

