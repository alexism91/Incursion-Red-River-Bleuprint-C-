#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MovieGraphRenderPassNode -FallbackName=MovieGraphRenderPassNode
#include "MovieGraphImagePassBaseNode.generated.h"

class UMovieGraphShowFlags;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINERENDERPASSES_API UMovieGraphImagePassBaseNode : public UMovieGraphRenderPassNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ShowFlags: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieGraphShowFlags* ShowFlags;
    
public:
    UMovieGraphImagePassBaseNode();

};

