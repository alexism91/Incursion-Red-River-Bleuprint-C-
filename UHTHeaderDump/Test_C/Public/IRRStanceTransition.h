#pragma once
#include "CoreMinimal.h"
#include "EIRRAIStanceState.h"
#include "IRRStanceWaypoint.h"
#include "IRRStanceTransition.generated.h"

USTRUCT(BlueprintType)
struct FIRRStanceTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAIStanceState From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRStanceWaypoint> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReachedIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LookAroundStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LookAroundEnd;
    
    TEST_C_API FIRRStanceTransition();
};

