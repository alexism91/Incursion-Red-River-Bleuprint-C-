#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "BaseParameterNameAndValue.h"
#include "TransformParameterNameAndCurves.generated.h"

USTRUCT(BlueprintType)
struct FTransformParameterNameAndCurves : public FBaseParameterNameAndValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Translation[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Rotation[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Scale[3];
    
    MOVIESCENETRACKS_API FTransformParameterNameAndCurves();
};

