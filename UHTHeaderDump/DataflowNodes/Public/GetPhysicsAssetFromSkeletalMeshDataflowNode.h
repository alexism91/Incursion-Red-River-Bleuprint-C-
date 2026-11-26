#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "GetPhysicsAssetFromSkeletalMeshDataflowNode.generated.h"

class UPhysicsAsset;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FGetPhysicsAssetFromSkeletalMeshDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    DATAFLOWNODES_API FGetPhysicsAssetFromSkeletalMeshDataflowNode();
};

