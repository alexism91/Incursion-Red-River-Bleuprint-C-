#pragma once
#include "CoreMinimal.h"
#include "ObjectReplicatedBridgeCriticalClassConfig.generated.h"

USTRUCT(BlueprintType)
struct FObjectReplicatedBridgeCriticalClassConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisconnectOnProtocolMismatch;
    
    IRISCORE_API FObjectReplicatedBridgeCriticalClassConfig();
};

