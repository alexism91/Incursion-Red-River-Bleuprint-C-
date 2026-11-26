#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetScaleSourceOpSettings.h"
#include "IKRetargetScaleSourceOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetScaleSourceOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetScaleSourceOpSettings Settings;
    
    IKRIG_API FIKRetargetScaleSourceOp();
};

