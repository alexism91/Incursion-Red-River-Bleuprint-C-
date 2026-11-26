#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "TraceControlStatus.h"
#include "TraceControlDiscovery.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlDiscovery : public FTraceControlStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    ENGINEMESSAGES_API FTraceControlDiscovery();
};

