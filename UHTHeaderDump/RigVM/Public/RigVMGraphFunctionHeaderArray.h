#pragma once
#include "CoreMinimal.h"
#include "RigVMGraphFunctionHeader.h"
#include "RigVMGraphFunctionHeaderArray.generated.h"

USTRUCT(BlueprintType)
struct FRigVMGraphFunctionHeaderArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMGraphFunctionHeader> Headers;
    
    RIGVM_API FRigVMGraphFunctionHeaderArray();
};

