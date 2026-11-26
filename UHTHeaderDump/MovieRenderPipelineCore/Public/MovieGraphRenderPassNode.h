#pragma once
#include "CoreMinimal.h"
#include "MovieGraphSettingNode.h"
#include "MovieGraphRenderPassNode.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphRenderPassNode : public UMovieGraphSettingNode {
    GENERATED_BODY()
public:
    UMovieGraphRenderPassNode();

};

