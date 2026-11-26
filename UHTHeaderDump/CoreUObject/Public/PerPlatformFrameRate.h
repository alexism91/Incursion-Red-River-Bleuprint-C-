#pragma once
#include "CoreMinimal.h"
#include "FrameRate.h"
#include "PerPlatformFrameRate.generated.h"

USTRUCT(BlueprintType)
struct FPerPlatformFrameRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate Default;
    
    COREUOBJECT_API FPerPlatformFrameRate();
};

