#pragma once
#include "CoreMinimal.h"
#include "UsdMetadataValue.generated.h"

USTRUCT(BlueprintType)
struct FUsdMetadataValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringifiedValue;
    
    USDCLASSES_API FUsdMetadataValue();
};

