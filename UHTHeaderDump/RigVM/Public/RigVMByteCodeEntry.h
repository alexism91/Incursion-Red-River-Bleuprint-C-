#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeEntry.generated.h"

USTRUCT(BlueprintType)
struct FRigVMByteCodeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstructionIndex;
    
    RIGVM_API FRigVMByteCodeEntry();
};

