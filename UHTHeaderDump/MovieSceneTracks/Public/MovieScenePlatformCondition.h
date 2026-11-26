#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneCondition -FallbackName=MovieSceneCondition
#include "MovieScenePlatformCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UMovieScenePlatformCondition : public UMovieSceneCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ValidPlatforms;
    
    UMovieScenePlatformCondition();

};

