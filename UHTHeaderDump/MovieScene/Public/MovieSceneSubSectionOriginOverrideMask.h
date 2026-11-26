#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSubSectionOriginOverrideMask.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSubSectionOriginOverrideMask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Mask;
    
public:
    MOVIESCENE_API FMovieSceneSubSectionOriginOverrideMask();
};

