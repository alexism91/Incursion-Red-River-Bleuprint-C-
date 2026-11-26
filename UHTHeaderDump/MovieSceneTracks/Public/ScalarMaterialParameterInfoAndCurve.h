#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialParameterInfo -FallbackName=MaterialParameterInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "ScalarMaterialParameterInfoAndCurve.generated.h"

USTRUCT(BlueprintType)
struct FScalarMaterialParameterInfoAndCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel ParameterCurve;
    
    MOVIESCENETRACKS_API FScalarMaterialParameterInfoAndCurve();
};

