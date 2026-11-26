#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseVoxelTool -FallbackName=BaseVoxelTool
#include "VoxelBlendMeshesTool.generated.h"

class UVoxelBlendMeshesToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVoxelBlendMeshesTool : public UBaseVoxelTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelBlendMeshesToolProperties* BlendProperties;
    
public:
    UVoxelBlendMeshesTool();

};

