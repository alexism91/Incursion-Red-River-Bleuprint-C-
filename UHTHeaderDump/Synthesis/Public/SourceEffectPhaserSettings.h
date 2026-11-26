#pragma once
#include "CoreMinimal.h"
#include "EPhaserLFOType.h"
#include "SourceEffectPhaserSettings.generated.h"

USTRUCT(BlueprintType)
struct FSourceEffectPhaserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhaserLFOType LFOType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseQuadraturePhase;
    
    SYNTHESIS_API FSourceEffectPhaserSettings();
};

