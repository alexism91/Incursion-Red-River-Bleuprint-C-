#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_NameBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_NameBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_NameBase();
};

