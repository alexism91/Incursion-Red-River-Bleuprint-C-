#pragma once
#include "CoreMinimal.h"
#include "ESpawnOwnership.h"
#include "MovieSceneCustomBinding.h"
#include "MovieSceneSpawnableBindingBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UMovieSceneSpawnableBindingBase : public UMovieSceneCustomBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnOwnership SpawnOwnership;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinuouslyRespawn;
    
    UMovieSceneSpawnableBindingBase();

};

