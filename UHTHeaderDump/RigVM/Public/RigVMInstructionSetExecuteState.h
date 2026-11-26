#pragma once
#include "CoreMinimal.h"
#include "RigVMInstructionSetExecuteState.generated.h"

USTRUCT(BlueprintType)
struct FRigVMInstructionSetExecuteState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, uint32> SliceHashToNumInstruction;
    
    RIGVM_API FRigVMInstructionSetExecuteState();
};

