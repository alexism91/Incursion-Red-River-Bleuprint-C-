#pragma once
#include "CoreMinimal.h"
#include "TraceTaskData.h"
#include "SilhouetteTaskData.generated.h"

class AActor;
class ULXRDetectionComponent;

USTRUCT(BlueprintType)
struct LXR_API FSilhouetteTaskData : public FTraceTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRDetectionComponent* DetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    FSilhouetteTaskData();
};

