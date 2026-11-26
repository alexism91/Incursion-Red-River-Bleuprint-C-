#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_StringBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_StringBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_StringBase();
};

