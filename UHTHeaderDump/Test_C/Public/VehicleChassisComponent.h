#pragma once
#include "CoreMinimal.h"
#include "VehicleChassisBase.h"
#include "VehicleChassisComponent.generated.h"

class UVehicleWheelComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UVehicleChassisComponent : public UVehicleChassisBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelbaseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSteeringAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedForSteering;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVehicleWheelComponent*> Wheels;
    
public:
    UVehicleChassisComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDriveState(float NewLinearSpeed, float NewSteeringAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UVehicleWheelComponent*> GetWheels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWheelbase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteeringAngle() const;
    
};

