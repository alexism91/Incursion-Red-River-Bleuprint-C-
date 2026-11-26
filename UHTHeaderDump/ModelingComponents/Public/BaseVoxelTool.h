#pragma once
#include "CoreMinimal.h"
#include "BaseCreateFromSelectedTool.h"
#include "BaseVoxelTool.generated.h"

class UVoxelProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseVoxelTool : public UBaseCreateFromSelectedTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelProperties* VoxProperties;
    
public:
    UBaseVoxelTool();

};

