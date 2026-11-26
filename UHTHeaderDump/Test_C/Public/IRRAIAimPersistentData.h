#pragma once
#include "CoreMinimal.h"
#include "EIRRAIAimStatus.h"
#include "EIRRAIShootStatus.h"
#include "IRRAIAimTimeData.h"
#include "IRRAIAimPersistentData.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIAimPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIAimTimeData AimTimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAIAimStatus AimStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAIShootStatus ShootStatus;
    
    FIRRAIAimPersistentData();
};

