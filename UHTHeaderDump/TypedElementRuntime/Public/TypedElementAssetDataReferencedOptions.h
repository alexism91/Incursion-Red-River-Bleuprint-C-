#pragma once
#include "CoreMinimal.h"
#include "TypedElementAssetDataReferencedOptions.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementAssetDataReferencedOptions {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyTopLevelAsset;
    
public:
    TYPEDELEMENTRUNTIME_API FTypedElementAssetDataReferencedOptions();
};

