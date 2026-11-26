#pragma once
#include "CoreMinimal.h"
#include "EOdinGainControllerVersion.h"
#include "EOdinNoiseSuppression.h"
#include "OdinApmConfig.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinApmConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool echo_canceller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool high_pass_filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool transient_suppressor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOdinNoiseSuppression> noise_suppression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOdinGainControllerVersion> gain_controller;
    
    FOdinApmConfig();
};

