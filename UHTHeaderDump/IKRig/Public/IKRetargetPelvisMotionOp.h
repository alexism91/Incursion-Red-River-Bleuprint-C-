#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetPelvisMotionOpSettings.h"
#include "IKRetargetPelvisMotionOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetPelvisMotionOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetPelvisMotionOpSettings Settings;
    
    IKRIG_API FIKRetargetPelvisMotionOp();
};

