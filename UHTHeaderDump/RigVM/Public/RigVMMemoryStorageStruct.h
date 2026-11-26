#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
#include "RigVMMemoryStorageStruct.generated.h"

USTRUCT(BlueprintType)
struct FRigVMMemoryStorageStruct : public FInstancedPropertyBag {
    GENERATED_BODY()
public:
    RIGVM_API FRigVMMemoryStorageStruct();
};

