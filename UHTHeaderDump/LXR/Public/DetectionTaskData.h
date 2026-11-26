#pragma once
#include "CoreMinimal.h"
#include "TraceTaskData.h"
#include "DetectionTaskData.generated.h"

class ULXRDetectionComponent;

USTRUCT(BlueprintType)
struct LXR_API FDetectionTaskData : public FTraceTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRDetectionComponent* DetectionComponent;
    
    FDetectionTaskData();
};

