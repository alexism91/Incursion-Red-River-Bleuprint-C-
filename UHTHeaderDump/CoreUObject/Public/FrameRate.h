#pragma once
#include "CoreMinimal.h"
#include "FrameRate.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FFrameRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Numerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Denominator;
    
    COREUOBJECT_API FFrameRate();
};

