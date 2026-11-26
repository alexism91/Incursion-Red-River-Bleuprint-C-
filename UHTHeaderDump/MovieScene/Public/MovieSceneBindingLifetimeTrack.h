#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityProvider.h"
#include "MovieSceneTrack.h"
#include "MovieSceneBindingLifetimeTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneBindingLifetimeTrack : public UMovieSceneTrack, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneBindingLifetimeTrack();


    // Fix for true pure virtual functions not being implemented
};

