#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "EInteractionFinishedMode.h"
#include "EInteractionType.h"
#include "InteractionActions.h"
#include "InteractionDisplaySetting.h"
#include "InteractionHighlightSetting.h"
#include "InteractionHoldingSettings.h"
#include "InteractionRepeatSetting.h"
#include "InteractionWaitSetting.h"
#include "InteractionOption.generated.h"

class AActor;
class UIRRObjectReplicationComponent;
class UInteractionCondition;
class UInteractionTarget;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UInteractionOption : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowConcurrentInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionHighlightSetting ActorHighlightSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractionCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDisplaySetting DefaultDisplaySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDisplaySetting HoldDisplaySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionHoldingSettings HoldInteractionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDisplaySetting RepeatDisplaySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionRepeatSetting RepeatInteractionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDisplaySetting WaitDisplaySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionWaitSetting WaitInteractionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInteractionFinishedMode, FInteractionActions> OnFinishedActions;
    
    UInteractionOption();

    UFUNCTION(BlueprintCallable)
    void ReplicateActions(UIRRObjectReplicationComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    void FinishInteraction(EInteractionFinishedMode FinishedMode, UInteractionTarget* OwnerComp, AActor* InteractingActor, bool bDoubleTab);
    
    UFUNCTION(BlueprintCallable)
    bool CheckConditions(AActor* Owner, AActor* InteractingActor);
    
};

