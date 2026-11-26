#pragma once
#include "CoreMinimal.h"
#include "IRRAISenseEvent.h"
#include "IRRAISenseCache.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAISenseCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAISenseEvent> PersonalEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAISenseEvent> SharedEvents;
    
    FIRRAISenseCache();
};

