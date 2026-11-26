#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlayer -FallbackName=MovieSceneSequencePlayer
#include "ActorSequencePlayer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UActorSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UActorSequencePlayer();

};

