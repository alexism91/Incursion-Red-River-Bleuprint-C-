#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
#include "MovieSceneGameplayCueEventDelegate.h"
#include "MovieSceneGameplayCueTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneGameplayCueTrack();

    UFUNCTION(BlueprintCallable)
    static void SetSequencerTrackHandler(FMovieSceneGameplayCueEvent InGameplayCueTrackHandler);
    
};

