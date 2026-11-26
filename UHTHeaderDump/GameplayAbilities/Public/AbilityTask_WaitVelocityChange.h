#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AbilityTask.h"
#include "WaitVelocityChangeDelegateDelegate.h"
#include "AbilityTask_WaitVelocityChange.generated.h"

class UAbilityTask_WaitVelocityChange;
class UGameplayAbility;
class UMovementComponent;

UCLASS(Blueprintable, MinimalAPI)
class UAbilityTask_WaitVelocityChange : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitVelocityChangeDelegate OnVelocityChage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMovementComponent> CachedMovementComponent;
    
public:
    UAbilityTask_WaitVelocityChange();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude);
    
};

