#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRAIBaseControllerComponent.generated.h"

class AIRRAIBaseController;
class UGameplayAbilityComponent;
class UIRRAITarget;
class UIRRAITargetTracker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIBaseControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIRRAIBaseControllerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAITargetTracker* GetTargetTracker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAITarget* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIRRAIBaseController* GetAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayAbilityComponent* GetAbilityComponent() const;
    
};

