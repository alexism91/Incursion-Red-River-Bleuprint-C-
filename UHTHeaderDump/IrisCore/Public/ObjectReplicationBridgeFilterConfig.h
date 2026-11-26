#pragma once
#include "CoreMinimal.h"
#include "ObjectReplicationBridgeFilterConfig.generated.h"

USTRUCT(BlueprintType)
struct FObjectReplicationBridgeFilterConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DynamicFilterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEnableOnAllInstances;
    
    IRISCORE_API FObjectReplicationBridgeFilterConfig();
};

