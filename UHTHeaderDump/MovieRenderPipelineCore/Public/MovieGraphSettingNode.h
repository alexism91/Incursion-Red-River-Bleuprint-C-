#pragma once
#include "CoreMinimal.h"
#include "MovieGraphNode.h"
#include "MovieGraphSettingNode.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphSettingNode : public UMovieGraphNode {
    GENERATED_BODY()
public:
    UMovieGraphSettingNode();

};

