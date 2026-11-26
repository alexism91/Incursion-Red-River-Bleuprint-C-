#pragma once
#include "CoreMinimal.h"
#include "MovieGraphRenderDataIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FMovieGraphRenderDataIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootBranchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RendererName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CameraName;
    
    MOVIERENDERPIPELINECORE_API FMovieGraphRenderDataIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FMovieGraphRenderDataIdentifier) { return 0; }

