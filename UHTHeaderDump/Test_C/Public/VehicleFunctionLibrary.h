#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VehicleDamageEvent.h"
#include "VehicleFunctionLibrary.generated.h"

class AActor;
class UCurveFloat;
class UObject;

UCLASS(Blueprintable)
class TEST_C_API UVehicleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVehicleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVehicleDestroyed(AActor* Vehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVehicle(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBlastDamageScale(float Distance, float InnerRadius, float OuterRadius, float MinDamageFraction, float FalloffExponent, UCurveFloat* FalloffCurve);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 ApplyVehicleDamageInRadius(const UObject* WorldContextObject, const FVehicleDamageEvent& DamageEvent, float Radius, TArray<AActor*>& OutHitVehicles, float LethalRadius, float MinDamageFraction, float InnerRadius, float FalloffExponent, UCurveFloat* FalloffCurve);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyVehicleDamage(AActor* Vehicle, const FVehicleDamageEvent& DamageEvent);
    
};

