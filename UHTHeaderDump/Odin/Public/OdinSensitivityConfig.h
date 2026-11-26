#pragma once
#include "CoreMinimal.h"
#include "OdinSensitivityConfig.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinSensitivityConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseThreshold;
    
    FOdinSensitivityConfig();
};

