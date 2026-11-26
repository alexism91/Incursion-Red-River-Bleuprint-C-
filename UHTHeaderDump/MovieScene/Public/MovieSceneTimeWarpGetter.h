#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannelOwner.h"
#include "MovieSceneNumericVariantGetter.h"
#include "MovieSceneTimeWarpGetter.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMovieSceneTimeWarpGetter : public UMovieSceneNumericVariantGetter, public IMovieSceneChannelOwner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMuted: 1;
    
public:
    UMovieSceneTimeWarpGetter();


    // Fix for true pure virtual functions not being implemented
};

