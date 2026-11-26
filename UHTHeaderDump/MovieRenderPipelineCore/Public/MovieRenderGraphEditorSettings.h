#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "MovieGraphPostRenderSettings.h"
#include "MovieRenderGraphEditorSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class MOVIERENDERPIPELINECORE_API UMovieRenderGraphEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphPostRenderSettings PostRenderSettings;
    
    UMovieRenderGraphEditorSettings();

};

