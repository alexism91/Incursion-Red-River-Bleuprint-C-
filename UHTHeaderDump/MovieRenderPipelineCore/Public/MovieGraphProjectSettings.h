#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "MovieGraphNamedResolution.h"
#include "MovieGraphProjectSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=MovieRenderPipeline)
class MOVIERENDERPIPELINECORE_API UMovieGraphProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieGraphNamedResolution> DefaultNamedResolutions;
    
    UMovieGraphProjectSettings();

};

