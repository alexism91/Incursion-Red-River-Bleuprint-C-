#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigElementWeight.h"
#include "RigUnit_DynamicHierarchyBase.h"
#include "RigUnit_HierarchyGetParentWeights.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementWeight> Weights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Parents;
    
    CONTROLRIG_API FRigUnit_HierarchyGetParentWeights();
};

