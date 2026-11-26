#pragma once
#include "CoreMinimal.h"
#include "EUsdUpAxis.h"
#include "UsdStageOptions.generated.h"

USTRUCT(BlueprintType)
struct USDCLASSES_API FUsdStageOptions {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MetersPerUnit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUsdUpAxis UpAxis;
    
    FUsdStageOptions();
};

