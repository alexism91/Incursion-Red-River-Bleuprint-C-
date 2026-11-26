#pragma once
#include "CoreMinimal.h"
#include "EIRRHackDeviceState.h"
#include "IRRHackDeviceStatus.generated.h"

USTRUCT(BlueprintType)
struct FIRRHackDeviceStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRHackDeviceState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DeviceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingCost;
    
    IRRMISSIONSYSTEM_API FIRRHackDeviceStatus();
};

