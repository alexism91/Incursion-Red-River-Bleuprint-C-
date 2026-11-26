#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionRuntimeContainerInstance.h"
#include "WorldPartitionRuntimeContainer.generated.h"

USTRUCT(BlueprintType)
struct FWorldPartitionRuntimeContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FWorldPartitionRuntimeContainerInstance> ContainerInstances;
    
public:
    ENGINE_API FWorldPartitionRuntimeContainer();
};

