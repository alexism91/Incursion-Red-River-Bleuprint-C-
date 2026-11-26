#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
#include "AbilityTask.generated.h"

class UAbilitySystemComponent;
class UGameplayAbility;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAbilityTask : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbility* Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
    
    UAbilityTask();

};

