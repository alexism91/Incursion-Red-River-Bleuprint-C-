#pragma once
#include "CoreMinimal.h"
#include "MovieGraphFileOutputNode.h"
#include "MovieGraphAudioOutputNode.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphAudioOutputNode : public UMovieGraphFileOutputNode {
    GENERATED_BODY()
public:
    UMovieGraphAudioOutputNode();

};

