#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTimeWarpSource.h"
#include "MovieSceneTrack.h"
#include "MovieSceneTimeWarpTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTimeWarpTrack : public UMovieSceneTrack, public IMovieSceneTimeWarpSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActiveTimeWarp;
    
public:
    UMovieSceneTimeWarpTrack();


    // Fix for true pure virtual functions not being implemented
};

