#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneTimeWarpChannel.h"
#include "MovieSceneTimeWarpGetter.h"
#include "MovieScenePlayRateCurve.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScenePlayRateCurve : public UMovieSceneTimeWarpGetter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTimeWarpChannel PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber PlaybackStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualPlaybackStart;
    
    UMovieScenePlayRateCurve();

};

