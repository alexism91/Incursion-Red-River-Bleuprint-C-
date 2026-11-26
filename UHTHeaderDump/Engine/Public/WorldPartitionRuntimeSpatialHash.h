#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SpatialHashSettings.h"
#include "SpatialHashStreamingGrid.h"
#include "WorldPartitionRuntimeHash.h"
#include "WorldPartitionRuntimeSpatialHash.generated.h"

class URuntimeSpatialHashExternalStreamingObject;

UCLASS(Blueprintable, MinimalAPI, Config=Engine)
class UWorldPartitionRuntimeSpatialHash : public UWorldPartitionRuntimeHash {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableZCulling;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpatialHashSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<FSpatialHashStreamingGrid> StreamingGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, URuntimeSpatialHashExternalStreamingObject*> WorldAssetStreamingObjects;
    
public:
    UWorldPartitionRuntimeSpatialHash();

};

