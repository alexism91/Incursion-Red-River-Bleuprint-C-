#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedToolBuilder -FallbackName=BaseCreateFromSelectedToolBuilder
#include "VoxelBlendMeshesToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder {
    GENERATED_BODY()
public:
    UVoxelBlendMeshesToolBuilder();

};

