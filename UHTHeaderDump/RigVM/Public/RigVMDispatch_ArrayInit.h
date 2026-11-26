#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBaseMutable.h"
#include "RigVMDispatch_ArrayInit.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_ArrayInit : public FRigVMDispatch_ArrayBaseMutable {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_ArrayInit();
};

