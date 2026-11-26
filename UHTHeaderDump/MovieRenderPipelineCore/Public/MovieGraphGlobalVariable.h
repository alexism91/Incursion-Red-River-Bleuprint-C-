#pragma once
#include "CoreMinimal.h"
#include "MovieGraphVariable.h"
#include "MovieGraphGlobalVariable.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphGlobalVariable : public UMovieGraphVariable {
    GENERATED_BODY()
public:
    UMovieGraphGlobalVariable();

};

