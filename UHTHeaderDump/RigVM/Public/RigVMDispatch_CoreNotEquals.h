#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_CoreEquals.h"
#include "RigVMDispatch_CoreNotEquals.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_CoreNotEquals : public FRigVMDispatch_CoreEquals {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_CoreNotEquals();
};

