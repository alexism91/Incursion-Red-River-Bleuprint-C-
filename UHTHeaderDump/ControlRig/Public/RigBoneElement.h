#pragma once
#include "CoreMinimal.h"
#include "ERigBoneType.h"
#include "RigSingleParentElement.h"
#include "RigBoneElement.generated.h"

USTRUCT(BlueprintType)
struct FRigBoneElement : public FRigSingleParentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigBoneType BoneType;
    
    CONTROLRIG_API FRigBoneElement();
};

