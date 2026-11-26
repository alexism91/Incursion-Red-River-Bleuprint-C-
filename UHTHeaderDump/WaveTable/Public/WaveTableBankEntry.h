#pragma once
#include "CoreMinimal.h"
#include "WaveTableTransform.h"
#include "WaveTableBankEntry.generated.h"

USTRUCT(BlueprintType)
struct FWaveTableBankEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveTableTransform Transform;
    
    WAVETABLE_API FWaveTableBankEntry();
};

