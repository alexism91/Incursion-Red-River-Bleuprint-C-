#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=TopLevelAssetPath -FallbackName=TopLevelAssetPath
#include "ActorContainerID.h"
#include "WorldPartitionResolveData.generated.h"

USTRUCT(BlueprintType)
struct FWorldPartitionResolveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorContainerID ContainerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTopLevelAssetPath SourceWorldAssetPath;
    
    ENGINE_API FWorldPartitionResolveData();
};

