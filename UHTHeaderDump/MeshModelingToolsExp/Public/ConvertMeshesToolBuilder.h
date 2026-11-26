#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolBuilder -FallbackName=InteractiveToolBuilder
#include "ConvertMeshesToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UConvertMeshesToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UConvertMeshesToolBuilder();

};

