#pragma once
#include "CoreMinimal.h"
#include "CalibratedMapFormat.h"
#include "STMapInfo.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FSTMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* DistortionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCalibratedMapFormat MapFormat;
    
    CAMERACALIBRATIONCORE_API FSTMapInfo();
};

