#pragma once
#include "CoreMinimal.h"
#include "IRRWeightedBotType.generated.h"

USTRUCT(BlueprintType)
struct FIRRWeightedBotType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BotTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    TEST_C_API FIRRWeightedBotType();
};

