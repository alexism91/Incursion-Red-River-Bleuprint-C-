#pragma once
#include "CoreMinimal.h"
#include "RigVMExecutePin.h"
#include "RigVMStruct.h"
#include "RigVMStructMutable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMStructMutable : public FRigVMStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecutePin ExecutePin;
    
    RIGVM_API FRigVMStructMutable();
};

