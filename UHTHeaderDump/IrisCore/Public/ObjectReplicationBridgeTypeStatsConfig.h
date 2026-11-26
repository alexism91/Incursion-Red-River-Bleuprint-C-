#pragma once
#include "CoreMinimal.h"
#include "ObjectReplicationBridgeTypeStatsConfig.generated.h"

USTRUCT(BlueprintType)
struct FObjectReplicationBridgeTypeStatsConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TypeStatsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeInMinimalCSVStats;
    
    IRISCORE_API FObjectReplicationBridgeTypeStatsConfig();
};

