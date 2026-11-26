#pragma once
#include "CoreMinimal.h"
#include "MovieGraphSettingNode.h"
#include "MovieGraphRenderLayerNode.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphRenderLayerNode : public UMovieGraphSettingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LayerName: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LayerName;
    
    UMovieGraphRenderLayerNode();

};

