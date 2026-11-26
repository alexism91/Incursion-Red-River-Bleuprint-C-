#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "IRREnhancedUltraDynamicSky.generated.h"

class UExponentialHeightFogComponent;

UCLASS(Blueprintable, NoExport)
class IRRULTRADYNAMICSKY_API AIRREnhancedUltraDynamicSky : public AActor {
    GENERATED_BODY()
public:
    AIRREnhancedUltraDynamicSky(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWeatherTypeFromConsole(int32 Type, float TransitionTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeOfDayFromConsole(int32 Hours);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyAtmosphereAmbientContributionColorScale(UExponentialHeightFogComponent* HeightFogComponent, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetSunDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetMoonDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetAmbientLightIntensity() const;
    
};

