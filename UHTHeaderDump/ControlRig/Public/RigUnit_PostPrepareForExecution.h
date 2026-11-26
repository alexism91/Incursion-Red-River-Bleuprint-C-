#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMExecutePin -FallbackName=RigVMExecutePin
#include "RigUnit.h"
#include "RigUnit_PostPrepareForExecution.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_PostPrepareForExecution : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecutePin ExecutePin;
    
    CONTROLRIG_API FRigUnit_PostPrepareForExecution();
};

