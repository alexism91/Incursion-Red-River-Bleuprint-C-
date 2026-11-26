#pragma once
#include "CoreMinimal.h"
#include "IKRetargetCopyBasePoseOpSettings.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetCopyBasePoseOp.generated.h"

USTRUCT(BlueprintType)
struct FIKRetargetCopyBasePoseOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetCopyBasePoseOpSettings Settings;
    
    IKRIG_API FIKRetargetCopyBasePoseOp();
};

