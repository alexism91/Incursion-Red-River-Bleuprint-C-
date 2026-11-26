#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneIntegerChannel -FallbackName=MovieSceneIntegerChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=BaseParameterNameAndValue -FallbackName=BaseParameterNameAndValue
#include "IntegerParameterNameAndCurve.generated.h"

USTRUCT(BlueprintType)
struct FIntegerParameterNameAndCurve : public FBaseParameterNameAndValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneIntegerChannel ParameterCurve;
    
    CONTROLRIG_API FIntegerParameterNameAndCurve();
};

