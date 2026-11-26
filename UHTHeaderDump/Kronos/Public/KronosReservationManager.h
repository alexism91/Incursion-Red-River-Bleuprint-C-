#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "KronosReservationManager.generated.h"

class AKronosReservationHost;
class AKronosReservationListener;
class UKronosReservationManager;

UCLASS(Blueprintable)
class KRONOS_API UKronosReservationManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosReservationListener* ReservationBeaconListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosReservationHost* ReservationBeaconHost;
    
public:
    UKronosReservationManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldCreateReservationHost() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKronosReservationManager* Get(const UObject* WorldContextObject);
    
};

