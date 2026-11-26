#pragma once
#include "CoreMinimal.h"
#include "RigVMStructMutable.h"
#include "RigVMFunction_SimBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_SimBaseMutable : public FRigVMStructMutable {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_SimBaseMutable();
};

