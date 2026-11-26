#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineDeferredPassBase.h"
#include "MoviePipelineDeferredPass_PathTracer.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReferenceMotionBlur;
    
    UMoviePipelineDeferredPass_PathTracer();

};

