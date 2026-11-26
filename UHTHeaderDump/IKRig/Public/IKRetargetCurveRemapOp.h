#pragma once
#include "CoreMinimal.h"
#include "IKRetargetCurveRemapOpSettings.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetCurveRemapOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetCurveRemapOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetCurveRemapOpSettings Settings;
    
    IKRIG_API FIKRetargetCurveRemapOp();
};

