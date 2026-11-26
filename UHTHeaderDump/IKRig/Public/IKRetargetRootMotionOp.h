#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetRootMotionOpSettings.h"
#include "IKRetargetRootMotionOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetRootMotionOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetRootMotionOpSettings Settings;
    
    IKRIG_API FIKRetargetRootMotionOp();
};

