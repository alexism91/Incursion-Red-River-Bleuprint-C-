#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAnchorsScalingGroup.generated.h"

class UMovieSceneSection;

USTRUCT(BlueprintType)
struct FMovieSceneAnchorsScalingGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UMovieSceneSection*> Sections;
    
    MOVIESCENE_API FMovieSceneAnchorsScalingGroup();
};

