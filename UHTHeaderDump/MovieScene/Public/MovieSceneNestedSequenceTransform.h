#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "MovieSceneTimeWarpVariant.h"
#include "MovieSceneNestedSequenceTransform.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNestedSequenceTransform {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTimeWarpVariant TimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime Offset;
    
public:
    MOVIESCENE_API FMovieSceneNestedSequenceTransform();
};

