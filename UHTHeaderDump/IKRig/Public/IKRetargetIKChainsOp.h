#pragma once
#include "CoreMinimal.h"
#include "IKRetargetIKChainsOpSettings.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetIKChainsOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetIKChainsOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetIKChainsOpSettings Settings;
    
    IKRIG_API FIKRetargetIKChainsOp();
};

