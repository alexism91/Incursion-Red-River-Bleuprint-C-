#pragma once
#include "CoreMinimal.h"
#include "MovieSceneDecorationContainer.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneDecorationContainerObject.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, MinimalAPI)
class UMovieSceneDecorationContainerObject : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneDecorationContainer Decorations;
    
public:
    UMovieSceneDecorationContainerObject();

};

