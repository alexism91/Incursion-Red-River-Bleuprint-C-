#pragma once
#include "CoreMinimal.h"
#include "EIRRBriefingWaitTimeout.h"
#include "IRRBriefingWaitSettings.generated.h"

USTRUCT(BlueprintType)
struct IRRMISSIONSYSTEM_API FIRRBriefingWaitSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetryInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRBriefingWaitTimeout WaitTimeoutPolicy;
    
    FIRRBriefingWaitSettings();
};

