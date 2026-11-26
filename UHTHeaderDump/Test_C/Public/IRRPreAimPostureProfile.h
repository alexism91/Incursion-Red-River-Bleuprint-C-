#pragma once
#include "CoreMinimal.h"
#include "IRRPreAimPostureProfile.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRPreAimPostureProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GainMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmthCapMult;
    
    FIRRPreAimPostureProfile();
};

