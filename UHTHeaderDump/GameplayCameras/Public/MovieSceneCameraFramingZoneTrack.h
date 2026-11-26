#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieScenePropertyTrack -FallbackName=MovieScenePropertyTrack
#include "MovieSceneCameraFramingZoneTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneCameraFramingZoneTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneCameraFramingZoneTrack();

};

