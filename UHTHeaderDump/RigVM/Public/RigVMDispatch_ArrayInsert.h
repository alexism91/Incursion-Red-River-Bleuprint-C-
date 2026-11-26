#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArraySetAtIndex.h"
#include "RigVMDispatch_ArrayInsert.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_ArrayInsert : public FRigVMDispatch_ArraySetAtIndex {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_ArrayInsert();
};

