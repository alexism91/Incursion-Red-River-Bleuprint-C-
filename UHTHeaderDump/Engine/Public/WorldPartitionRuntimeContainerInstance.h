#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "WorldPartitionRuntimeContainerInstance.generated.h"

USTRUCT(BlueprintType)
struct FWorldPartitionRuntimeContainerInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ActorGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContainerPackage;
    
public:
    ENGINE_API FWorldPartitionRuntimeContainerInstance();
};

