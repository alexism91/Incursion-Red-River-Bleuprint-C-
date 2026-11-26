#pragma once
#include "CoreMinimal.h"
#include "DistortionInfo.generated.h"

USTRUCT(BlueprintType)
struct FDistortionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<float> Parameters;
    
    CAMERACALIBRATIONCORE_API FDistortionInfo();
};

