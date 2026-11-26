#pragma once
#include "CoreMinimal.h"
#include "MovieGraphRenderPassNode.h"
#include "MovieGraphWidgetRendererBaseNode.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphWidgetRendererBaseNode : public UMovieGraphRenderPassNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_bCompositeOntoFinalImage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompositeOntoFinalImage;
    
    UMovieGraphWidgetRendererBaseNode();

};

