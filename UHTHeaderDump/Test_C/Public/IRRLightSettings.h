#pragma once
#include "CoreMinimal.h"
#include "IRRLightSettings.generated.h"

USTRUCT(BlueprintType)
struct FIRRLightSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightIntensities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightIntensitiesInfrared;
    
public:
    TEST_C_API FIRRLightSettings();
};

