#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_IsHostBeingDebugged.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_IsHostBeingDebugged : public FRigVMStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Result;
    
    RIGVM_API FRigVMFunction_IsHostBeingDebugged();
};

