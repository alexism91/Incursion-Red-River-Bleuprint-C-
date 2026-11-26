#pragma once
#include "CoreMinimal.h"
#include "MovieGraphMetadataAttribute.generated.h"

USTRUCT(BlueprintType)
struct FMovieGraphMetadataAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    MOVIERENDERPIPELINECORE_API FMovieGraphMetadataAttribute();
};

