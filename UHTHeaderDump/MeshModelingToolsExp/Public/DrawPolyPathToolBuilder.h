#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolBuilder -FallbackName=InteractiveToolBuilder
#include "DrawPolyPathToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDrawPolyPathToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UDrawPolyPathToolBuilder();

};

