#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedToolBuilder -FallbackName=BaseCreateFromSelectedToolBuilder
#include "VoxelMorphologyMeshesToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder {
    GENERATED_BODY()
public:
    UVoxelMorphologyMeshesToolBuilder();

};

