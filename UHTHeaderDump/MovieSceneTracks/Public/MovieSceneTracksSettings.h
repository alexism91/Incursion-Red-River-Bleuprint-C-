#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneTracksSettings.generated.h"

UCLASS(Blueprintable, PerObjectConfig, Config=EditorPerProjectUserSettings)
class MOVIESCENETRACKS_API UMovieSceneTracksSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviewCameraCutsInSimulate;
    
public:
    UMovieSceneTracksSettings();

};

