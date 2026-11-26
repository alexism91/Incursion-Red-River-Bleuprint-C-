#pragma once
#include "CoreMinimal.h"
#include "EWaveTableBitDepth.h"
#include "WaveTableData.generated.h"

USTRUCT(BlueprintType)
struct FWaveTableData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaveTableBitDepth BitDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalValue;
    
public:
    WAVETABLE_API FWaveTableData();
};

