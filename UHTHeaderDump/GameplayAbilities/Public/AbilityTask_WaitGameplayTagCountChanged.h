#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityTask.h"
#include "WaitGameplayTagCountDelegateDelegate.h"
#include "AbilityTask_WaitGameplayTagCountChanged.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAbilityTask_WaitGameplayTagCountChanged;
class UGameplayAbility;

UCLASS(Blueprintable, MinimalAPI)
class UAbilityTask_WaitGameplayTagCountChanged : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayTagCountDelegate TagCountChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OptionalExternalTarget;
    
public:
    UAbilityTask_WaitGameplayTagCountChanged();

protected:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayTagCountChanged* WaitGameplayTagCountChange(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget);
    
};

