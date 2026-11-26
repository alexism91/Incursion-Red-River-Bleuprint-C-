#pragma once
#include "CoreMinimal.h"
#include "OdinViConfig.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinViConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationLimitDb;
    
    FOdinViConfig();
};

