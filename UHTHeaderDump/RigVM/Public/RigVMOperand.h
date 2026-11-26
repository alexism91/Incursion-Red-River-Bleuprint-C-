#pragma once
#include "CoreMinimal.h"
#include "ERigVMMemoryType.h"
#include "RigVMOperand.generated.h"

USTRUCT(BlueprintType)
struct FRigVMOperand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigVMMemoryType MemoryType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 RegisterIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 RegisterOffset;
    
public:
    RIGVM_API FRigVMOperand();
};

