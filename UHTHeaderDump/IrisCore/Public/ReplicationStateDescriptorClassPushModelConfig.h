#pragma once
#include "CoreMinimal.h"
#include "ReplicationStateDescriptorClassPushModelConfig.generated.h"

USTRUCT(BlueprintType)
struct FReplicationStateDescriptorClassPushModelConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    IRISCORE_API FReplicationStateDescriptorClassPushModelConfig();
};

