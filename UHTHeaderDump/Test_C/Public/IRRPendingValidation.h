#pragma once
#include "CoreMinimal.h"
#include "IRRQueuedSpawn.h"
#include "IRRPendingValidation.generated.h"

USTRUCT(BlueprintType)
struct FIRRPendingValidation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRQueuedSpawn> Requests;
    
    TEST_C_API FIRRPendingValidation();
};

