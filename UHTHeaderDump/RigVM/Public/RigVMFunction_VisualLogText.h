#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_VisualLogBase.h"
#include "RigVMFunction_VisualLogText.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_VisualLogText : public FRigVMFunction_VisualLogBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_VisualLogText();
};

