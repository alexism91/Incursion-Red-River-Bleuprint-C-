#pragma once
#include "CoreMinimal.h"
#include "IRRBehavior.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* TargetPawn;
    
    FIRRBehavior();
};

