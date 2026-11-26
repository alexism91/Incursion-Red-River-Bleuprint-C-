#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetStrideWarpingOpSettings.h"
#include "IKRetargetStrideWarpingOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetStrideWarpingOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetStrideWarpingOpSettings Settings;
    
    IKRIG_API FIKRetargetStrideWarpingOp();
};

