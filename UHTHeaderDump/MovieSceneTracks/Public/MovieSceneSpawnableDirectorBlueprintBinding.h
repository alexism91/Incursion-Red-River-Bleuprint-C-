#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneDynamicBinding -FallbackName=MovieSceneDynamicBinding
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSpawnableBindingBase -FallbackName=MovieSceneSpawnableBindingBase
#include "MovieSceneSpawnableDirectorBlueprintBinding.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UMovieSceneSpawnableDirectorBlueprintBinding : public UMovieSceneSpawnableBindingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneDynamicBinding DynamicBinding;
    
    UMovieSceneSpawnableDirectorBlueprintBinding();

};

