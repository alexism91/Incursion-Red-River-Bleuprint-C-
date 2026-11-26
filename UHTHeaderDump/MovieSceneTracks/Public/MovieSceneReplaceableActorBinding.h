#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneReplaceableBindingBase -FallbackName=MovieSceneReplaceableBindingBase
#include "MovieSceneReplaceableActorBinding.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UMovieSceneReplaceableActorBinding : public UMovieSceneReplaceableBindingBase {
    GENERATED_BODY()
public:
    UMovieSceneReplaceableActorBinding();

};

