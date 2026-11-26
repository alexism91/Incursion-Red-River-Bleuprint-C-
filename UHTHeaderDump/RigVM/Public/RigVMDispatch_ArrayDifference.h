#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBase.h"
#include "RigVMDispatch_ArrayDifference.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_ArrayDifference : public FRigVMDispatch_ArrayBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_ArrayDifference();
};

