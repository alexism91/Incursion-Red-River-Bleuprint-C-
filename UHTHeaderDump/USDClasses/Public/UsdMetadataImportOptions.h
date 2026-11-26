#pragma once
#include "CoreMinimal.h"
#include "UsdMetadataImportOptions.generated.h"

USTRUCT(BlueprintType)
struct USDCLASSES_API FUsdMetadataImportOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectMetadata;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectFromEntireSubtrees;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectOnComponents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BlockedPrefixFilters;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertFilters;
    
    FUsdMetadataImportOptions();
};

