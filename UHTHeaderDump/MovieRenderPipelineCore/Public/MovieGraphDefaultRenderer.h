#pragma once
#include "CoreMinimal.h"
#include "MovieGraphRendererBase.h"
#include "MovieGraphDefaultRenderer.generated.h"

class UMovieGraphRenderPassNode;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphDefaultRenderer : public UMovieGraphRendererBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphRenderPassNode*> RenderPassesInUse;
    
public:
    UMovieGraphDefaultRenderer();

};

