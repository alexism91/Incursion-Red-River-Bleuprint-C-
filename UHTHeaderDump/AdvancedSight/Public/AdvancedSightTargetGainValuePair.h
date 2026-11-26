#pragma once
#include "CoreMinimal.h"
#include "AdvancedSightTargetGainValuePair.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ADVANCEDSIGHT_API FAdvancedSightTargetGainValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GainValue;
    
    FAdvancedSightTargetGainValuePair();
};

