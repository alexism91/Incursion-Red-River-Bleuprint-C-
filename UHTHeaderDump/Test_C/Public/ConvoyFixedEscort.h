#pragma once
#include "CoreMinimal.h"
#include "ConvoyFixedEscort.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FConvoyFixedEscort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BotTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    FConvoyFixedEscort();
};

