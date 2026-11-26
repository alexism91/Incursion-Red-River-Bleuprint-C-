#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBaseMutable.h"
#include "RigVMDispatch_ArraySetAtIndex.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_ArraySetAtIndex : public FRigVMDispatch_ArrayBaseMutable {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_ArraySetAtIndex();
};

