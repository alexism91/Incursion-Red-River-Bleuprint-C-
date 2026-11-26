#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackImplementation -FallbackName=MovieSceneTrackImplementation
#include "MovieSceneNiagaraSectionTemplateParameter.h"
#include "MovieSceneNiagaraCacheSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNiagaraCacheSectionTemplate : public FMovieSceneTrackImplementation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneNiagaraSectionTemplateParameter> CacheSections;
    
public:
    NIAGARASIMCACHING_API FMovieSceneNiagaraCacheSectionTemplate();
};

