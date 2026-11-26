#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneBaseCacheSection -FallbackName=MovieSceneBaseCacheSection
#include "MovieSceneNiagaraCacheParams.h"
#include "MovieSceneNiagaraCacheSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneNiagaraCacheSection : public UMovieSceneBaseCacheSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneNiagaraCacheParams Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCacheOutOfDate;
    
    UMovieSceneNiagaraCacheSection();

};

