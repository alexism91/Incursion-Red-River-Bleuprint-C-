#pragma once
#include "CoreMinimal.h"
#include "RigVMDrawInstruction.h"
#include "RigVMDrawContainer.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDrawContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMDrawInstruction> Instructions;
    
    RIGVM_API FRigVMDrawContainer();
};

