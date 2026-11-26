#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "IRRMissionEventInterface.h"
#include "IRRMissionEventPayload.h"
#include "IRRMissionService.generated.h"

class AActor;
class UIRRMissionObjective;
class UIRRTargetData;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMissionService : public UIRRReplicatedObject, public IIRRMissionEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MessageToListen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTargetData;
    
    UIRRMissionService();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryExecuteOnInit(UIRRMissionObjective* Objective);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryExecute(UIRRMissionObjective* Objective, FGameplayTag MessageTag, UIRRTargetData* TargetData, FIRRMissionEventPayload Payload, AActor* Receiver);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(UIRRMissionObjective* Objective, FGameplayTag MessageTag, UIRRTargetData* TargetData, FIRRMissionEventPayload Payload, AActor* Instigator);
    

    // Fix for true pure virtual functions not being implemented
};

