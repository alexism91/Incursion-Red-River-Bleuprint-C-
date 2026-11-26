#pragma once
#include "CoreMinimal.h"
#include "RigBone.h"
#include "RigBoneHierarchy.generated.h"

USTRUCT(BlueprintType)
struct FRigBoneHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigBone> Bones;
    
public:
    CONTROLRIG_API FRigBoneHierarchy();
};

