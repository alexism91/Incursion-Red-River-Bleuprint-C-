#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldPartitionRuntimeCellTransformer -FallbackName=WorldPartitionRuntimeCellTransformer
#include "MeshBlendWorldPartitionRuntimeCellTransformer.generated.h"

class UMeshBlendProcessor;

UCLASS(Blueprintable)
class MESHBLEND_API UMeshBlendWorldPartitionRuntimeCellTransformer : public UWorldPartitionRuntimeCellTransformer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMeshBlendProcessor* MeshBlendProcessor;
    
public:
    UMeshBlendWorldPartitionRuntimeCellTransformer();

};

