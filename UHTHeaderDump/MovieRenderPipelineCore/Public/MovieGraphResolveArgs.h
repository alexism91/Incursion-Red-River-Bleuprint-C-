#pragma once
#include "CoreMinimal.h"
#include "MovieGraphResolveArgs.generated.h"

USTRUCT(BlueprintType)
struct FMovieGraphResolveArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> FilenameArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> FileMetadata;
    
    MOVIERENDERPIPELINECORE_API FMovieGraphResolveArgs();
};

