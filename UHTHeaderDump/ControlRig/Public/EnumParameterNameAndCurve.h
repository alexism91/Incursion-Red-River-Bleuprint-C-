#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneByteChannel -FallbackName=MovieSceneByteChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=BaseParameterNameAndValue -FallbackName=BaseParameterNameAndValue
#include "EnumParameterNameAndCurve.generated.h"

USTRUCT(BlueprintType)
struct FEnumParameterNameAndCurve : public FBaseParameterNameAndValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel ParameterCurve;
    
    CONTROLRIG_API FEnumParameterNameAndCurve();
};

