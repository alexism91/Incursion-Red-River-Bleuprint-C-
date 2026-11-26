#pragma once
#include "CoreMinimal.h"
#include "Timespan.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FTimespan {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Ticks;
    
    COREUOBJECT_API FTimespan();
};

