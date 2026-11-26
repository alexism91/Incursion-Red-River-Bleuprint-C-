#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneLifetimeDecoration.h"
#include "MovieSceneScalingDriver.h"
#include "MovieSceneSectionDecoration.h"
#include "MovieSceneSectionAnchorsDecoration.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneSectionAnchorsDecoration : public UObject, public IMovieSceneSectionDecoration, public IMovieSceneLifetimeDecoration, public IMovieSceneScalingDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid StartAnchor;
    
    UMovieSceneSectionAnchorsDecoration();


    // Fix for true pure virtual functions not being implemented
};

