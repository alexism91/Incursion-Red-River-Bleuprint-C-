#pragma once
#include "CoreMinimal.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_HierarchyCreatePoseItemArray_Entry.h"
#include "RigUnit_HierarchyCreatePoseItemArray.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyCreatePoseItemArray : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_HierarchyCreatePoseItemArray_Entry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPose Pose;
    
    CONTROLRIG_API FRigUnit_HierarchyCreatePoseItemArray();
};

