#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_CoreBase.h"
#include "RigVMDispatch_ArrayBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_ArrayBase : public FRigVMDispatch_CoreBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_ArrayBase();
};

