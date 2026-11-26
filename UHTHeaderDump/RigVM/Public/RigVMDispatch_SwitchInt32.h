#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_CoreBase.h"
#include "RigVMDispatch_SwitchInt32.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_SwitchInt32 : public FRigVMDispatch_CoreBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_SwitchInt32();
};

