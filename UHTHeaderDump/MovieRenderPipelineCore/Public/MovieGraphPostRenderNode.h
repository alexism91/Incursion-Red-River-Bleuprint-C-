#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MovieGraphPostRenderNode.generated.h"

UINTERFACE()
class MOVIERENDERPIPELINECORE_API UMovieGraphPostRenderNode : public UInterface {
    GENERATED_BODY()
};

class MOVIERENDERPIPELINECORE_API IMovieGraphPostRenderNode : public IInterface {
    GENERATED_BODY()
public:
};

