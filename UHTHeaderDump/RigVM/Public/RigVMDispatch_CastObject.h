#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatchFactory.h"
#include "RigVMDispatch_CastObject.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDispatch_CastObject : public FRigVMDispatchFactory {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDispatch_CastObject();
};

