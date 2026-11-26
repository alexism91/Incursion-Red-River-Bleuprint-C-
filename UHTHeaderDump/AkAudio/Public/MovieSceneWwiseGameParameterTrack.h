#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneAkTrack.h"
#include "MovieSceneWwiseGameParameterTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneWwiseGameParameterTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneWwiseGameParameterTrack();


    // Fix for true pure virtual functions not being implemented
};

