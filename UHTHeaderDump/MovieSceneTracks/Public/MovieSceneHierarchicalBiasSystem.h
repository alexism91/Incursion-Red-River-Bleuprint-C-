#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityInstantiatorSystem -FallbackName=MovieSceneEntityInstantiatorSystem
#include "MovieSceneHierarchicalBiasSystem.generated.h"

class UMovieSceneEntityGroupingSystem;

UCLASS(Blueprintable)
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneEntityGroupingSystem* GroupingSystem;
    
public:
    UMovieSceneHierarchicalBiasSystem();

};

