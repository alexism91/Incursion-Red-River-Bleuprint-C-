#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "BaseParameterNameAndValue.h"
#include "VectorParameterNameAndCurves.generated.h"

USTRUCT(BlueprintType)
struct FVectorParameterNameAndCurves : public FBaseParameterNameAndValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel XCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel YCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel ZCurve;
    
    MOVIESCENETRACKS_API FVectorParameterNameAndCurves();
};

