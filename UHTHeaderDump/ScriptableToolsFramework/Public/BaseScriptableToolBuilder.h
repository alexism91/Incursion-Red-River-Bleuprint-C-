#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolBuilder -FallbackName=InteractiveToolBuilder
#include "BaseScriptableToolBuilder.generated.h"

UCLASS(Blueprintable, NonTransient)
class SCRIPTABLETOOLSFRAMEWORK_API UBaseScriptableToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UBaseScriptableToolBuilder();

};

