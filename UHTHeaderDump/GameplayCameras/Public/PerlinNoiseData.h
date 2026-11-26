#pragma once
#include "CoreMinimal.h"
#include "PerlinNoiseData.generated.h"

USTRUCT(BlueprintType)
struct FPerlinNoiseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    GAMEPLAYCAMERAS_API FPerlinNoiseData();
};

