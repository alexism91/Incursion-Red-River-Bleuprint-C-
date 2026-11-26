#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "KronosMatchmakingPolicy.generated.h"

class AKronosReservationClient;
class UKronosMatchmakingSearchPass;

UCLASS(Blueprintable, NotPlaceable)
class KRONOS_API UKronosMatchmakingPolicy : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKronosMatchmakingSearchPass* SearchPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosReservationClient* ReservationBeaconClient;
    
public:
    UKronosMatchmakingPolicy();

};

