#pragma once
#include "CoreMinimal.h"
#include "IRRActorDistResult.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRActorDistResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceSqr;
    
    FIRRActorDistResult();
};

