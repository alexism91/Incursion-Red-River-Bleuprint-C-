#pragma once
#include "CoreMinimal.h"
#include "DateTime.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FDateTime {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Ticks;
    
    COREUOBJECT_API FDateTime();
};

