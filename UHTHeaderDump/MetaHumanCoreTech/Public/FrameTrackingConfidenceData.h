#pragma once
#include "CoreMinimal.h"
#include "FrameTrackingConfidenceData.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORETECH_API FFrameTrackingConfidenceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    FFrameTrackingConfidenceData();
};

