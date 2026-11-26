#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MovieSceneFadeTrackTestLibrary.generated.h"

class APlayerCameraManager;

UCLASS(Blueprintable)
class UMovieSceneFadeTrackTestLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneFadeTrackTestLibrary();

    UFUNCTION(BlueprintCallable)
    static float GetManualFadeAmount(APlayerCameraManager* PlayerCameraManager);
    
};

