#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFrameRange -FallbackName=MovieSceneFrameRange
#include "MovieSceneNiagaraCacheParams.h"
#include "MovieSceneNiagaraSectionTemplateParameter.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNiagaraSectionTemplateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange SectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneNiagaraCacheParams Params;
    
    NIAGARASIMCACHING_API FMovieSceneNiagaraSectionTemplateParameter();
};

