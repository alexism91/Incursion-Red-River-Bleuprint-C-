#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EToolsFrameworkOutcomePins.h"
#include "ScriptableInteractiveToolPropertySet.generated.h"

class UScriptableInteractiveTool;

UCLASS(Blueprintable, NonTransient)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableInteractiveToolPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UScriptableInteractiveToolPropertySet();

private:
    UFUNCTION(BlueprintCallable)
    UScriptableInteractiveTool* GetOwningTool(EToolsFrameworkOutcomePins& Outcome);
    
};

