#pragma once
#include "CoreMinimal.h"
#include "IKRetargetAlignPoleVectorOpSettings.h"
#include "IKRetargetOpBase.h"
#include "RetargetChainMapping.h"
#include "IKRetargetAlignPoleVectorOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetAlignPoleVectorOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetAlignPoleVectorOpSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRetargetChainMapping ChainMapping;
    
    IKRIG_API FIKRetargetAlignPoleVectorOp();
};

