#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayDifference.h"
#include "RigVMDispatch_ArrayIntersection.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_ArrayIntersection : public FRigVMDispatch_ArrayDifference {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_ArrayIntersection();
};

