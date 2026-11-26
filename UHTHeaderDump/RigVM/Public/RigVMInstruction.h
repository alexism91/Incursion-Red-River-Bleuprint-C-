#pragma once
#include "CoreMinimal.h"
#include "ERigVMOpCode.h"
#include "RigVMInstruction.generated.h"

USTRUCT(BlueprintType)
struct FRigVMInstruction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ByteCodeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigVMOpCode OpCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OperandAlignment;
    
    RIGVM_API FRigVMInstruction();
};

