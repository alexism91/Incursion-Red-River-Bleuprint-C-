#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRGrenadePredictionConfig.h"
#include "IRRGrenadePredictionResult.h"
#include "IRRGrenadePredictionLibrary.generated.h"

class AActor;
class AGrenadeActor;
class UObject;

UCLASS(Blueprintable)
class TEST_C_API UIRRGrenadePredictionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRGrenadePredictionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SuggestGrenadeThrow(const UObject* WorldContextObject, const FVector& StartLocation, const FVector& TargetLocation, float ThrowSpeed, const FIRRGrenadePredictionConfig& Config, FVector& OutThrowDirection, FIRRGrenadePredictionResult& OutResult, AActor* IgnoredActor, float MaxLandingDeviation, bool bFavorHighArc, float LobPitch);
    
    UFUNCTION(BlueprintCallable)
    static bool PredictLiveGrenadeLanding(AGrenadeActor* Grenade, const FIRRGrenadePredictionConfig& Config, FIRRGrenadePredictionResult& OutResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PredictGrenadePath(const UObject* WorldContextObject, const FVector& StartLocation, const FVector& LaunchVelocity, const FIRRGrenadePredictionConfig& Config, FIRRGrenadePredictionResult& OutResult, AActor* IgnoredActor);
    
};

