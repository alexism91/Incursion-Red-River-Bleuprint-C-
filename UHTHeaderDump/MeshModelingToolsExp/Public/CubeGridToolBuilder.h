#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolWithToolTargetsBuilder -FallbackName=InteractiveToolWithToolTargetsBuilder
#include "CubeGridToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder {
    GENERATED_BODY()
public:
    UCubeGridToolBuilder();

};

