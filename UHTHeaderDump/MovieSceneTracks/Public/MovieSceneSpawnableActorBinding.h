#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSpawnableActorBindingBase.h"
#include "MovieSceneSpawnableActorBinding.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UMovieSceneSpawnableActorBinding : public UMovieSceneSpawnableActorBindingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorTemplate;
    
public:
    UMovieSceneSpawnableActorBinding();

};

