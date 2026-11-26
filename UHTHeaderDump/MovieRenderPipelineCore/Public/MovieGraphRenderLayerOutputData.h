#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "MovieGraphStringArray.h"
#include "MovieGraphRenderLayerOutputData.generated.h"

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphRenderLayerOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FilePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FrameTemplatedFilePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftClassPath, FMovieGraphStringArray> NodeTypeToFilePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenderLayerIndex;
    
    FMovieGraphRenderLayerOutputData();
};

