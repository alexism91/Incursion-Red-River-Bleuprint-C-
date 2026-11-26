#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatchFactory.h"
#include "RigVMDispatch_CastIntToEnum.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_CastIntToEnum : public FRigVMDispatchFactory {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_CastIntToEnum();
};

