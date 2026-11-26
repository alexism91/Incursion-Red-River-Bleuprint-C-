#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetPinBoneOpSettings.h"
#include "IKRetargetPinBoneOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetPinBoneOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetPinBoneOpSettings Settings;
    
    IKRIG_API FIKRetargetPinBoneOp();
};

