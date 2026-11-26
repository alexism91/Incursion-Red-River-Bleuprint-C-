#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "RuntimePartitionDesc.h"
#include "RuntimePartitionStreamingData.h"
#include "WorldPartitionRuntimeHash.h"
#include "WorldPartitionRuntimeHashSet.generated.h"

class URuntimeHashSetExternalStreamingObject;

UCLASS(Blueprintable, MinimalAPI)
class UWorldPartitionRuntimeHashSet : public UWorldPartitionRuntimeHash {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimePartitionDesc> RuntimePartitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimePartitionStreamingData> RuntimeStreamingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, URuntimeHashSetExternalStreamingObject*> WorldAssetStreamingObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FGuid> StandaloneHLODActorToSourceCellsMap;
    
public:
    UWorldPartitionRuntimeHashSet();

};

