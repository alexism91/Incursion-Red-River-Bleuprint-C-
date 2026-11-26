#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneCameraShakeSectionData.h"
#include "MovieSceneCameraShakeSourceShakeSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneCameraShakeSectionData ShakeData;
    
    UMovieSceneCameraShakeSourceShakeSection();


    // Fix for true pure virtual functions not being implemented
};

