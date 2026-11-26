#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFixedPlayRateStruct.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFixedPlayRateStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PlayRate;
    
    MOVIESCENE_API FMovieSceneFixedPlayRateStruct();
};

