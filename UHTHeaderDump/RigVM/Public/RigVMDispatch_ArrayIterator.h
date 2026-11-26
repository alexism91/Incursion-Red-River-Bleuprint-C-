#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBaseMutable.h"
#include "RigVMDispatch_ArrayIterator.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_ArrayIterator : public FRigVMDispatch_ArrayBaseMutable {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_ArrayIterator();
};

