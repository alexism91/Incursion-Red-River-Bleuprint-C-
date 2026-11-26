#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneTimeWarpFixedFrame.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeWarpFixedFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber FrameNumber;
    
    MOVIESCENE_API FMovieSceneTimeWarpFixedFrame();
};

