#include "IRRGrenadePredictionLibrary.h"

UIRRGrenadePredictionLibrary::UIRRGrenadePredictionLibrary() {
}

bool UIRRGrenadePredictionLibrary::SuggestGrenadeThrow(const UObject* WorldContextObject, const FVector& StartLocation, const FVector& TargetLocation, float ThrowSpeed, const FIRRGrenadePredictionConfig& Config, FVector& OutThrowDirection, FIRRGrenadePredictionResult& OutResult, AActor* IgnoredActor, float MaxLandingDeviation, bool bFavorHighArc, float LobPitch) {
    return false;
}

bool UIRRGrenadePredictionLibrary::PredictLiveGrenadeLanding(AGrenadeActor* Grenade, const FIRRGrenadePredictionConfig& Config, FIRRGrenadePredictionResult& OutResult) {
    return false;
}

bool UIRRGrenadePredictionLibrary::PredictGrenadePath(const UObject* WorldContextObject, const FVector& StartLocation, const FVector& LaunchVelocity, const FIRRGrenadePredictionConfig& Config, FIRRGrenadePredictionResult& OutResult, AActor* IgnoredActor) {
    return false;
}


