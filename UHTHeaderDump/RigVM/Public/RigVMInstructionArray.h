#pragma once
#include "CoreMinimal.h"
#include "RigVMInstruction.h"
#include "RigVMInstructionArray.generated.h"

USTRUCT(BlueprintType)
struct FRigVMInstructionArray {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMInstruction> Instructions;
    
public:
    RIGVM_API FRigVMInstructionArray();
};

