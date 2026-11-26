#pragma once
#include "CoreMinimal.h"
#include "DisplacementFadeRange.generated.h"

USTRUCT(BlueprintType)
struct FDisplacementFadeRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSizePixels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndSizePixels;
    
    ENGINE_API FDisplacementFadeRange();
};

