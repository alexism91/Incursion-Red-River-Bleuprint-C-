#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMExecutePin -FallbackName=RigVMExecutePin
#include "RigUnit.h"
#include "RigUnit_PreBeginExecution.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_PreBeginExecution : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExecutePin ExecutePin;
    
    CONTROLRIG_API FRigUnit_PreBeginExecution();
};

