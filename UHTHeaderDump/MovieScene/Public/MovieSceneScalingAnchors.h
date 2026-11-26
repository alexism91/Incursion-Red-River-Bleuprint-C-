#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneAnchorsScalingGroup.h"
#include "MovieSceneDecoration.h"
#include "MovieScenePlayRateCurve.h"
#include "MovieSceneScalingAnchor.h"
#include "MovieSceneTimeWarpSource.h"
#include "MovieSceneScalingAnchors.generated.h"

class IMovieSceneScalingDriver;
class UMovieSceneScalingDriver;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneScalingAnchors : public UMovieScenePlayRateCurve, public IMovieSceneDecoration, public IMovieSceneTimeWarpSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IMovieSceneScalingDriver>> ScalingDrivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FMovieSceneScalingAnchor> InitialAnchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FMovieSceneAnchorsScalingGroup> ScalingGroups;
    
public:
    UMovieSceneScalingAnchors();


    // Fix for true pure virtual functions not being implemented
};

