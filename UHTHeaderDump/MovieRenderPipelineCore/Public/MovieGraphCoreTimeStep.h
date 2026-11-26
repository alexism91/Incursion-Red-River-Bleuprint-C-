#pragma once
#include "CoreMinimal.h"
#include "MovieGraphTimeStepBase.h"
#include "MovieGraphTimeStepData.h"
#include "MovieGraphCoreTimeStep.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphCoreTimeStep : public UMovieGraphTimeStepBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieGraphTimeStepData CurrentTimeStepData;
    
public:
    UMovieGraphCoreTimeStep();

};

