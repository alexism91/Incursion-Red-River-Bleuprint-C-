#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WeightedBlendable -FallbackName=WeightedBlendable
#include "IRRAIWeatherSettings.h"
#include "IRRWeatherSettings.generated.h"

class UIRRWeatherSettings;

UCLASS(Blueprintable)
class IRRULTRADYNAMICSKY_API UIRRWeatherSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIWeatherSettings AISettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAIVisionDistance_Meters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIVisibilityFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIHearingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedBlendable> Blendables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRWeatherSettings*> CannotFollow;
    
    UIRRWeatherSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanFollow(const UIRRWeatherSettings* Previous, const UIRRWeatherSettings* Next);
    
};

