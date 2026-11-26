#pragma once
#include "CoreMinimal.h"
#include "RigControlCopy.h"
#include "ControlRigControlPose.generated.h"

USTRUCT(BlueprintType)
struct FControlRigControlPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigControlCopy> CopyOfControls;
    
    CONTROLRIG_API FControlRigControlPose();
};

