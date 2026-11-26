#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "IRRGraphCondition.generated.h"

class UIRRMissionComponent;
class UObject;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRGraphCondition : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ConditionDescription;
    
    UIRRGraphCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetConditionDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EvaluateCondition(UIRRMissionComponent* MissionComp, UObject* Payload, FText& ErrorMessage);
    
};

