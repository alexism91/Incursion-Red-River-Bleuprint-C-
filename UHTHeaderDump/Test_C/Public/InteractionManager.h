#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EInteractionState.h"
#include "Templates/SubclassOf.h"
#include "InteractionManager.generated.h"

class UInteractionAction;
class UInteractionOption;
class UInteractionTarget;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UInteractionManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckInteractionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToCenterOfScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TolerateHitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidgetPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TargetTextClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionTarget* SelectedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionTarget* InteractedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* TargetText;
    
    UInteractionManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateInteractionTarget(UInteractionTarget* InteractionTarget, UInteractionOption* InteractionOption, EInteractionState InteractionState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UpdateInteractionInProgress(UInteractionTarget* Target, bool bInProgress);
    
    UFUNCTION(BlueprintCallable)
    void StopInteraction();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartInteractionWithTarget(UInteractionTarget* Target);
    
    UFUNCTION(BlueprintCallable)
    void RequestInteraction();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestExclusiveInteraction(UInteractionTarget* Target, int32 OptionIndex, int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTarget(UInteractionTarget* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReleaseExclusiveInteraction(UInteractionTarget* Target);
    
    UFUNCTION(BlueprintCallable)
    TArray<UInteractionTarget*> GetTargets();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void FinishInteractionWithTarget(UInteractionTarget* Target, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ExecuteInteractionAction_Server(UInteractionTarget* Target, UInteractionAction* InteractionAction, bool bDoubleTab);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteInteractionAction(UInteractionTarget* Target, UInteractionAction* InteractionAction, bool bDoubleTab);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ExclusiveInteractionResult(UInteractionTarget* Target, int32 RequestID, bool bGranted);
    
    UFUNCTION(BlueprintCallable)
    void AddTarget(UInteractionTarget* Target);
    
};

