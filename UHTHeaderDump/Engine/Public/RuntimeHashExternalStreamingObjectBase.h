#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DataLayerInstanceProvider.h"
#include "WorldPartitionCookPackageObject.h"
#include "WorldPartitionRuntimeCellStreamingData.h"
#include "WorldPartitionRuntimeContainerResolver.h"
#include "RuntimeHashExternalStreamingObjectBase.generated.h"

class UDataLayerInstance;
class UExternalDataLayerInstance;
class UWorld;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class URuntimeHashExternalStreamingObjectBase : public UObject, public IWorldPartitionCookPackageObject, public IDataLayerInstanceProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> SubObjectsToCellRemapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldPartitionRuntimeContainerResolver ContainerResolver;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> OuterWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FWorldPartitionRuntimeCellStreamingData> CellToStreamingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UDataLayerInstance*> DataLayerInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExternalDataLayerInstance* RootExternalDataLayerInstance;
    
public:
    URuntimeHashExternalStreamingObjectBase();


    // Fix for true pure virtual functions not being implemented
};

