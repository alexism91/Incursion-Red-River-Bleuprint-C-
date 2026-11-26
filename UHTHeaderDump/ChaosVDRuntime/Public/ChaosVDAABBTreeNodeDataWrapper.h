#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDAABBTreeNodeDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDAABBTreeNodeDataWrapper : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox ChildrenBounds[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChildrenNodes[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParentNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLeaf: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDirtyNode: 1;
    
    CHAOSVDRUNTIME_API FChaosVDAABBTreeNodeDataWrapper();
};

