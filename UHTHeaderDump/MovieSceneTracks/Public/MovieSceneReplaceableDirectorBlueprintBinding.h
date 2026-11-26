#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneDynamicBinding -FallbackName=MovieSceneDynamicBinding
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneReplaceableBindingBase -FallbackName=MovieSceneReplaceableBindingBase
#include "Templates/SubclassOf.h"
#include "MovieSceneReplaceableDirectorBlueprintBinding.generated.h"

class UMovieSceneSpawnableBindingBase;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UMovieSceneReplaceableDirectorBlueprintBinding : public UMovieSceneReplaceableBindingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneDynamicBinding DynamicBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieSceneSpawnableBindingBase> PreviewSpawnableType;
    
    UMovieSceneReplaceableDirectorBlueprintBinding();

};

