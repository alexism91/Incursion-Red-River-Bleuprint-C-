#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_MakeStruct.h"
#include "RigVMDispatch_BreakStruct.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_BreakStruct : public FRigVMDispatch_MakeStruct {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_BreakStruct();
};

