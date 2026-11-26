#pragma once
#include "CoreMinimal.h"
#include "RigVMExecutePin.h"
#include "RigVMStruct.h"
#include "RigVMFunction_UserDefinedEvent.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_UserDefinedEvent : public FRigVMStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecutePin ExecutePin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    RIGVM_API FRigVMFunction_UserDefinedEvent();
};

