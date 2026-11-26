#pragma once
#include "CoreMinimal.h"
#include "MovieGraphVersioningSettings.generated.h"

USTRUCT(BlueprintType)
struct FMovieGraphVersioningSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoVersioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VersionNumber;
    
    MOVIERENDERPIPELINECORE_API FMovieGraphVersioningSettings();
};

