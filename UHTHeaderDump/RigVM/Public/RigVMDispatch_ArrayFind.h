#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBase.h"
#include "RigVMDispatch_ArrayFind.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_ArrayFind : public FRigVMDispatch_ArrayBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_ArrayFind();
};

