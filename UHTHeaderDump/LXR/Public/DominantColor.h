#pragma once
#include "CoreMinimal.h"
#include "EDominantColor.h"
#include "DominantColor.generated.h"

USTRUCT(BlueprintType)
struct LXR_API FDominantColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDominantColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorValue;
    
    FDominantColor();
};

