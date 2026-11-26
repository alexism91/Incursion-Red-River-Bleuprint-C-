#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphTimeStepData.h"
#include "MovieGraphTimeStepBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphTimeStepBase : public UObject {
    GENERATED_BODY()
public:
    UMovieGraphTimeStepBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieGraphTimeStepData GetCalculatedTimeData() const;
    
};

