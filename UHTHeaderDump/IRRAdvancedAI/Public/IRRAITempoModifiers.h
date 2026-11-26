#pragma once
#include "CoreMinimal.h"
#include "IRRAITempoModifiers.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAITempoModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostCoverActionDelayModifier;
    
    FIRRAITempoModifiers();
};

