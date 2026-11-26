#pragma once
#include "CoreMinimal.h"
#include "ChaosVDAccelerationStructureBase.h"
#include "ChaosVDAABBTreeDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDAABBTreeDataWrapper : public FChaosVDAccelerationStructureBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RootNodeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TreeDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodesNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeavesNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamicTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChildrenInLeaf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTreeDepth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxPayloadBounds;
    
    CHAOSVDRUNTIME_API FChaosVDAABBTreeDataWrapper();
};

