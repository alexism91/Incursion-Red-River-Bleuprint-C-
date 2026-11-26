#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseVoxelTool -FallbackName=BaseVoxelTool
#include "VoxelMorphologyMeshesTool.generated.h"

class UVoxelMorphologyMeshesToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelMorphologyMeshesToolProperties* MorphologyProperties;
    
public:
    UVoxelMorphologyMeshesTool();

};

