#pragma once
#include "CoreMinimal.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetRunIKRigOpSettings.h"
#include "RetargetChainMapping.h"
#include "IKRetargetRunIKRigOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetRunIKRigOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetRunIKRigOpSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRetargetChainMapping ChainMapping;
    
    IKRIG_API FIKRetargetRunIKRigOp();
};

