#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "EWorldPartitionDataLayersLogicOperator.h"
#include "Templates/SubclassOf.h"
#include "WorldPartitionSettings.generated.h"

class UWorldPartitionEditorHash;
class UWorldPartitionPropertyOverridePolicy;
class UWorldPartitionRuntimeHash;

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Engine)
class UWorldPartitionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldPartitionDataLayersLogicOperator NewMapsDataLayersLogicOperator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewMapsEnableWorldPartition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewMapsEnableWorldPartitionStreaming;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWorldPartitionEditorHash> EditorHashDefaultClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWorldPartitionRuntimeHash> RuntimeHashDefaultClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldPartitionPropertyOverridePolicy* PropertyOverridePolicy;
    
public:
    UWorldPartitionSettings();

};

