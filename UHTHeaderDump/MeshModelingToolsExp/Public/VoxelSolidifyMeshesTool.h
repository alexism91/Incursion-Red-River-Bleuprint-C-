#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseVoxelTool -FallbackName=BaseVoxelTool
#include "VoxelSolidifyMeshesTool.generated.h"

class UVoxelSolidifyMeshesToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelSolidifyMeshesToolProperties* SolidifyProperties;
    
public:
    UVoxelSolidifyMeshesTool();

};

