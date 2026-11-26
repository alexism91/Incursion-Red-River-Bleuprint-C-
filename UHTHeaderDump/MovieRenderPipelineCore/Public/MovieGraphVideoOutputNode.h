#pragma once
#include "CoreMinimal.h"
#include "MovieGraphFileOutputNode.h"
#include "MovieGraphVideoOutputNode.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphVideoOutputNode : public UMovieGraphFileOutputNode {
    GENERATED_BODY()
public:
    UMovieGraphVideoOutputNode();

};

