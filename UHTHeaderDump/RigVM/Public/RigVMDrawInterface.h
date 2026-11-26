#pragma once
#include "CoreMinimal.h"
#include "RigVMDrawContainer.h"
#include "RigVMDrawInterface.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDrawInterface : public FRigVMDrawContainer {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMDrawInterface();
};

