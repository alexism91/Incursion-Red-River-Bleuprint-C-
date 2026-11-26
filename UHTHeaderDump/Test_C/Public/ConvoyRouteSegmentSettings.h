#pragma once
#include "CoreMinimal.h"
#include "ConvoyRouteSegmentSettings.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FConvoyRouteSegmentSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowGround;
    
    FConvoyRouteSegmentSettings();
};

