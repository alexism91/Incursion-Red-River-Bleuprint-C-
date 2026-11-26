#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCustomBinding.h"
#include "MovieSceneReplaceableBindingBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UMovieSceneReplaceableBindingBase : public UMovieSceneCustomBinding {
    GENERATED_BODY()
public:
    UMovieSceneReplaceableBindingBase();

};

