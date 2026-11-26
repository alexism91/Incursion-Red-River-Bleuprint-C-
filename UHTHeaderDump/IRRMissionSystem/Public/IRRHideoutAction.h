#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "IRRHideoutAction.generated.h"

class UIRRHideoutUnitComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRHideoutAction : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UIRRHideoutAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteAction(UIRRHideoutUnitComponent* Unit, int32 Level);
    
};

