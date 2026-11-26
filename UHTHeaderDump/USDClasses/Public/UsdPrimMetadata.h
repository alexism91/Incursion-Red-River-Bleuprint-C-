#pragma once
#include "CoreMinimal.h"
#include "UsdMetadataValue.h"
#include "UsdPrimMetadata.generated.h"

USTRUCT(BlueprintType)
struct FUsdPrimMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FUsdMetadataValue> MetaData;
    
    USDCLASSES_API FUsdPrimMetadata();
};

