#pragma once
#include "CoreMinimal.h"
#include "IKRetargetFKChainsOpSettings.h"
#include "IKRetargetOpBase.h"
#include "RetargetChainMapping.h"
#include "IKRetargetFKChainsOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetFKChainsOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetFKChainsOpSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRetargetChainMapping ChainMapping;
    
    IKRIG_API FIKRetargetFKChainsOp();
};

