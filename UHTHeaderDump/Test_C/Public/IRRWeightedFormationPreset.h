#pragma once
#include "CoreMinimal.h"
#include "EIRRFormationPreset.h"
#include "IRRWeightedFormationPreset.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRWeightedFormationPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRFormationPreset Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FIRRWeightedFormationPreset();
};

