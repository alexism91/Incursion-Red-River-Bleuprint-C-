#pragma once
#include "CoreMinimal.h"
#include "TraceTaskParams.h"
#include "SilhouetteTraceTaskParams.generated.h"

USTRUCT(BlueprintType)
struct FSilhouetteTraceTaskParams : public FTraceTaskParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SilhouetteEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SilhouetteDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DistancePerSegment;
    
    LXR_API FSilhouetteTraceTaskParams();
};

