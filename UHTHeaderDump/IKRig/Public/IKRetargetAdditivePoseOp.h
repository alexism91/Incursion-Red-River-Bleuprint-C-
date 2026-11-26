#pragma once
#include "CoreMinimal.h"
#include "IKRetargetAdditivePoseOpSettings.h"
#include "IKRetargetOpBase.h"
#include "IKRetargetAdditivePoseOp.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FIKRetargetAdditivePoseOp : public FIKRetargetOpBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRetargetAdditivePoseOpSettings Settings;
    
public:
    FIKRetargetAdditivePoseOp();
};

