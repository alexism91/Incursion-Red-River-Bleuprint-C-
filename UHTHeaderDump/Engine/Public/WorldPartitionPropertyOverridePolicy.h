#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionPropertyOverridePolicy.generated.h"

UCLASS(Abstract, Blueprintable)
class UWorldPartitionPropertyOverridePolicy : public UObject {
    GENERATED_BODY()
public:
    UWorldPartitionPropertyOverridePolicy();

};

