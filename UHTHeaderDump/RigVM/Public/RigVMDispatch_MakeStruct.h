#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_CoreBase.h"
#include "RigVMDispatch_MakeStruct.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_MakeStruct : public FRigVMDispatch_CoreBase {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_MakeStruct();
};

