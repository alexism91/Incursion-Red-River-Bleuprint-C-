#pragma once
#include "CoreMinimal.h"
#include "IRRAIAimTimeData.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIAimTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AimProgress;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AimCompleteDelay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShootTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShootCompleteDelay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShootRecoverDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeldFire;
    
    FIRRAIAimTimeData();
};

