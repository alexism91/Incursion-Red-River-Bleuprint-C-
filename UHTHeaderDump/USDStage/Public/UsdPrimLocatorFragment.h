#pragma once
#include "CoreMinimal.h"
#include "UsdPrimLocatorFragment.generated.h"

USTRUCT(BlueprintType)
struct FUsdPrimLocatorFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreferComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrimPath;
    
    USDSTAGE_API FUsdPrimLocatorFragment();
};

