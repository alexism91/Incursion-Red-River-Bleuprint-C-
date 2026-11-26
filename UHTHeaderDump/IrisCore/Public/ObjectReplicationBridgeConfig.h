#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ObjectReplicatedBridgeCriticalClassConfig.h"
#include "ObjectReplicationBridgeDeltaCompressionConfig.h"
#include "ObjectReplicationBridgeFilterConfig.h"
#include "ObjectReplicationBridgePollConfig.h"
#include "ObjectReplicationBridgePrioritizerConfig.h"
#include "ObjectReplicationBridgeTypeStatsConfig.h"
#include "ObjectReplicationBridgeConfig.generated.h"

UCLASS(Blueprintable, Transient, Config=Engine)
class UObjectReplicationBridgeConfig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectReplicationBridgePollConfig> PollConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectReplicationBridgeFilterConfig> FilterConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectReplicationBridgePrioritizerConfig> PrioritizerConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectReplicationBridgeDeltaCompressionConfig> DeltaCompressionConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectReplicatedBridgeCriticalClassConfig> CriticalClassConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllClassesCritical;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectReplicationBridgeTypeStatsConfig> TypeStatsConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultSpatialFilterName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredNetDriverChannelClassName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CriticalActorClasses;
    
public:
    UObjectReplicationBridgeConfig();

};

