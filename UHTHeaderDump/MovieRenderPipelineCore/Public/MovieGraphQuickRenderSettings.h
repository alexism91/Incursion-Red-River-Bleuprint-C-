#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMovieGraphQuickRenderMode.h"
#include "MovieGraphQuickRenderSettings.generated.h"

class UMovieGraphQuickRenderModeSettings;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphQuickRenderSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMovieGraphQuickRenderModeSettings*> ModeSettings;
    
public:
    UMovieGraphQuickRenderSettings();

    UFUNCTION(BlueprintCallable)
    static UMovieGraphQuickRenderModeSettings* GetSavedQuickRenderModeSettings(EMovieGraphQuickRenderMode SettingsMode);
    
};

