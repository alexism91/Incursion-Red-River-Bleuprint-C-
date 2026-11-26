#pragma once
#include "CoreMinimal.h"
#include "MovieGraphRenderDataIdentifier.h"
#include "MovieGraphImagePreviewData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FMovieGraphImagePreviewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphRenderDataIdentifier Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultipleCameraNames;
    
    MOVIERENDERPIPELINECORE_API FMovieGraphImagePreviewData();
};

