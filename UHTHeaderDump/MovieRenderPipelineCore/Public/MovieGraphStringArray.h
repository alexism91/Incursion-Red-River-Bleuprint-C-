#pragma once
#include "CoreMinimal.h"
#include "MovieGraphStringArray.generated.h"

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMovieGraphStringArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Array;
    
    FMovieGraphStringArray();
};

