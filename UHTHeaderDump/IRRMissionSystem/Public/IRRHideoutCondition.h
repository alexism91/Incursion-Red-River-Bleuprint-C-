#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "IRRHideoutCondition.generated.h"

class UIRRHideoutUnitComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRHideoutCondition : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UIRRHideoutCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetConditionDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EvaluateCondition(UIRRHideoutUnitComponent* Unit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClickCondition(UIRRHideoutUnitComponent* Unit);
    
};

