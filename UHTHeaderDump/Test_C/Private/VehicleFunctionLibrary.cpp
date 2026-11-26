#include "VehicleFunctionLibrary.h"

UVehicleFunctionLibrary::UVehicleFunctionLibrary() {
}

bool UVehicleFunctionLibrary::IsVehicleDestroyed(AActor* Vehicle) {
    return false;
}

bool UVehicleFunctionLibrary::IsVehicle(const AActor* Actor) {
    return false;
}

float UVehicleFunctionLibrary::GetBlastDamageScale(float Distance, float InnerRadius, float OuterRadius, float MinDamageFraction, float FalloffExponent, UCurveFloat* FalloffCurve) {
    return 0.0f;
}

int32 UVehicleFunctionLibrary::ApplyVehicleDamageInRadius(const UObject* WorldContextObject, const FVehicleDamageEvent& DamageEvent, float Radius, TArray<AActor*>& OutHitVehicles, float LethalRadius, float MinDamageFraction, float InnerRadius, float FalloffExponent, UCurveFloat* FalloffCurve) {
    return 0;
}

bool UVehicleFunctionLibrary::ApplyVehicleDamage(AActor* Vehicle, const FVehicleDamageEvent& DamageEvent) {
    return false;
}


