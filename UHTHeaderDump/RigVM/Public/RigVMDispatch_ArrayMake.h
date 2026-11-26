#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBase.h"
#include "RigVMDispatch_ArrayMake.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_ArrayMake : public FRigVMDispatch_ArrayBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_ArrayMake();
};

