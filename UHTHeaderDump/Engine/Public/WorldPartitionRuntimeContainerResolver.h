#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionRuntimeContainer.h"
#include "WorldPartitionRuntimeContainerResolver.generated.h"

USTRUCT(BlueprintType)
struct FWorldPartitionRuntimeContainerResolver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FWorldPartitionRuntimeContainer> Containers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainContainerPackage;
    
public:
    ENGINE_API FWorldPartitionRuntimeContainerResolver();
};

