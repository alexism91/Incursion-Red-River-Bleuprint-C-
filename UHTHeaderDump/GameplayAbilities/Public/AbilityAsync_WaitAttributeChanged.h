#pragma once
#include "CoreMinimal.h"
#include "AbilityAsync.h"
#include "GameplayAttribute.h"
#include "AbilityAsync_WaitAttributeChanged.generated.h"

class AActor;
class UAbilityAsync_WaitAttributeChanged;

UCLASS(Blueprintable, MinimalAPI)
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAsyncWaitAttributeChangedDelegate, FGameplayAttribute, Attribute, float, NewValue, float, OldValue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncWaitAttributeChangedDelegate Changed;
    
    UAbilityAsync_WaitAttributeChanged();

    UFUNCTION(BlueprintCallable)
    static UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(AActor* TargetActor, FGameplayAttribute Attribute, bool OnlyTriggerOnce);
    
};

