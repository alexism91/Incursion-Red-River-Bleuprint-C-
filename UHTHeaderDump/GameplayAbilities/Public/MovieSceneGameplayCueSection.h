#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneHookSection -FallbackName=MovieSceneHookSection
#include "MovieSceneGameplayCueKey.h"
#include "MovieSceneGameplayCueSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneGameplayCueKey Cue;
    
public:
    UMovieSceneGameplayCueSection();

};

