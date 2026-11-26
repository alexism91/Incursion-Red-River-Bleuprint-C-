#pragma once
#include "CoreMinimal.h"
#include "RigVMExternalVariableDef.h"
#include "RigVMExternalVariable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMExternalVariable : public FRigVMExternalVariableDef {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMExternalVariable();
};

