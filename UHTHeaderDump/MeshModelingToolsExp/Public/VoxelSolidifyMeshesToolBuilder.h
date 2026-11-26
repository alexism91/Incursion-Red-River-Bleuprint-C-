#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedToolBuilder -FallbackName=BaseCreateFromSelectedToolBuilder
#include "VoxelSolidifyMeshesToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder {
    GENERATED_BODY()
public:
    UVoxelSolidifyMeshesToolBuilder();

};

