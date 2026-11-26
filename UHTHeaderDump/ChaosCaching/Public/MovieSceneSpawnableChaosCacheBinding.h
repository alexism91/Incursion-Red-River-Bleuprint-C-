#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneSpawnableActorBinding -FallbackName=MovieSceneSpawnableActorBinding
#include "MovieSceneSpawnableChaosCacheBinding.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UMovieSceneSpawnableChaosCacheBinding : public UMovieSceneSpawnableActorBinding {
    GENERATED_BODY()
public:
    UMovieSceneSpawnableChaosCacheBinding();

};

