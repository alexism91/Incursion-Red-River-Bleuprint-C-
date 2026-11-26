#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RigVMMemoryStorage.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URigVMMemoryStorage : public UObject {
    GENERATED_BODY()
public:
    URigVMMemoryStorage();

};

