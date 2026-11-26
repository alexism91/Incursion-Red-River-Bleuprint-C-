#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatchFactory.h"
#include "RigVMDispatch_CastEnumToInt.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_CastEnumToInt : public FRigVMDispatchFactory {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_CastEnumToInt();
};

