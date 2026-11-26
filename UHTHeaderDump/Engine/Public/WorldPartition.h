#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EWorldPartitionDataLayersLogicOperator.h"
#include "EWorldPartitionServerStreamingMode.h"
#include "EWorldPartitionServerStreamingOutMode.h"
#include "WorldPartition.generated.h"

class UDataLayerManager;
class UExternalDataLayerManager;
class UWorldPartitionRuntimeHash;
class UWorldPartitionStreamingPolicy;

UCLASS(Blueprintable, MinimalAPI)
class UWorldPartition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldPartitionRuntimeHash* RuntimeHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStreaming;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldPartitionServerStreamingMode ServerStreamingMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldPartitionServerStreamingOutMode ServerStreamingOutMode;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldPartitionDataLayersLogicOperator DataLayersLogicOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasStandaloneHLOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsStandaloneHLODWorld: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableContentBundles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UObject*> ReferencedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataLayerManager* DataLayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UExternalDataLayerManager* ExternalDataLayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldPartitionStreamingPolicy* StreamingPolicy;
    
public:
    UWorldPartition();

};

