#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "BaseParameterNameAndValue.h"
#include "Vector2DParameterNameAndCurves.generated.h"

USTRUCT(BlueprintType)
struct FVector2DParameterNameAndCurves : public FBaseParameterNameAndValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel XCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel YCurve;
    
    MOVIESCENETRACKS_API FVector2DParameterNameAndCurves();
};

