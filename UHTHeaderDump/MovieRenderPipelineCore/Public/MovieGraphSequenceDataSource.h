#pragma once
#include "CoreMinimal.h"
#include "MovieGraphDataSourceBase.h"
#include "MovieGraphSequenceDataSource.generated.h"

class ALevelSequenceActor;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphSequenceDataSource : public UMovieGraphDataSourceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    UMovieGraphSequenceDataSource();

};

