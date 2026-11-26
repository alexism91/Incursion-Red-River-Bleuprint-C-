#pragma once
#include "CoreMinimal.h"
#include "IRRSuppressedByActor.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRSuppressedByActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionValue;
    
    FIRRSuppressedByActor();
};

