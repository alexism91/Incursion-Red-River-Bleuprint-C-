#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMDispatchFactory -FallbackName=RigVMDispatchFactory
#include "RigDispatchFactory.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatchFactory : public FRigVMDispatchFactory {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatchFactory();
};

