#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineConsoleVariableEntry.generated.h"

USTRUCT(BlueprintType)
struct MOVIERENDERPIPELINECORE_API FMoviePipelineConsoleVariableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    FMoviePipelineConsoleVariableEntry();
};

