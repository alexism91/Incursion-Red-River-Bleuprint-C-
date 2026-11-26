#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBaseMutable.h"
#include "RigVMDispatch_ArrayRemove.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_ArrayRemove : public FRigVMDispatch_ArrayBaseMutable {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_ArrayRemove();
};

