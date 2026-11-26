#pragma once
#include "CoreMinimal.h"
#include "IRRAICategorySettingsBase.h"
#include "IRRAISimulationSettings.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAISimulationSettings : public FIRRAICategorySettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, float> OptimizationRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BotMovementTicksPerSec;
    
    FIRRAISimulationSettings();
};

