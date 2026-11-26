#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatchFactory.h"
#include "RigVMDispatch_Print.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_Print : public FRigVMDispatchFactory {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_Print();
};

