#pragma once
#include "CoreMinimal.h"
#include "UsdPrimMetadata.h"
#include "UsdCombinedPrimMetadata.generated.h"

USTRUCT(BlueprintType)
struct FUsdCombinedPrimMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FUsdPrimMetadata> PrimPathToMetadata;
    
    USDCLASSES_API FUsdCombinedPrimMetadata();
};

