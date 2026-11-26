#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ConvoyVehicleSlot.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct TEST_C_API FConvoyVehicleSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> VehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceBehindLead;
    
    FConvoyVehicleSlot();
};

