#pragma once
#include "CoreMinimal.h"
#include "EIRRAIStanceState.h"
#include "IRRStanceWaypoint.generated.h"

USTRUCT(BlueprintType)
struct FIRRStanceWaypoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAIStanceState State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ActivateTime;
    
    TEST_C_API FIRRStanceWaypoint();
};

