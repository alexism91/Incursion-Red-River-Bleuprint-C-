#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "EMovieSceneBreadcrumbMode.h"
#include "MovieSceneTransformBreadcrumbs.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTransformBreadcrumbs {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameTime> Breadcrumbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneBreadcrumbMode Mode;
    
public:
    MOVIESCENE_API FMovieSceneTransformBreadcrumbs();
};

