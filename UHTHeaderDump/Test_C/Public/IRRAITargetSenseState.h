#pragma once
#include "CoreMinimal.h"
#include "IRRAIPerceptionData.h"
#include "IRRAISenseEventEntry.h"
#include "IRRAITargetSenseState.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAITargetSenseState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIPerceptionData Perception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAISenseEventEntry> SenseEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLastKnownInSight;
    
    FIRRAITargetSenseState();
};

