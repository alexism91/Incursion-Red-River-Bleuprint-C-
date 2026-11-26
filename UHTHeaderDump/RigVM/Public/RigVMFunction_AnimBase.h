#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_AnimBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_AnimBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMFunction_AnimBase();
};

