#pragma once
#include "CoreMinimal.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit.h"
#include "RigUnit_ConnectorExecution.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ConnectorExecution : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FControlRigExecuteContext ExecuteContext;
    
    CONTROLRIG_API FRigUnit_ConnectorExecution();
};

