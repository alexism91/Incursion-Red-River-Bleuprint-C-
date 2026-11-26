#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneWwiseGameParameterTemplate.generated.h"

class UMovieSceneWwiseGameParameterSection;

USTRUCT(BlueprintType)
struct AKAUDIO_API FMovieSceneWwiseGameParameterTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneWwiseGameParameterSection* Section;
    
    FMovieSceneWwiseGameParameterTemplate();
};

