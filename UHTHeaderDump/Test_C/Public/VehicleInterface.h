#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "VehicleDamageEvent.h"
#include "VehicleInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UVehicleInterface : public UInterface {
    GENERATED_BODY()
};

class IVehicleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsVehicleDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyVehicle(const FVehicleDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyVehicleDamage(const FVehicleDamageEvent& DamageEvent);
    
};

