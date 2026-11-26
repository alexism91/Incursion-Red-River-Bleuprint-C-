#pragma once
#include "CoreMinimal.h"
#include "ClusterUnionBoneData.h"
#include "ClusterUnionPendingAddData.generated.h"

USTRUCT(BlueprintType)
struct FClusterUnionPendingAddData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FClusterUnionBoneData> BonesData;
    
    ENGINE_API FClusterUnionPendingAddData();
};

