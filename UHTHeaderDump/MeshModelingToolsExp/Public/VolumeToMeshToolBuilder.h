#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolBuilder -FallbackName=InteractiveToolBuilder
#include "VolumeToMeshToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVolumeToMeshToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UVolumeToMeshToolBuilder();

};

