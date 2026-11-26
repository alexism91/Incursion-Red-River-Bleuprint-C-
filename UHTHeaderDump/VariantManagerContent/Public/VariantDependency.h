#pragma once
#include "CoreMinimal.h"
#include "VariantDependency.generated.h"

class UVariant;
class UVariantSet;

USTRUCT(BlueprintType)
struct FVariantDependency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVariantSet> VariantSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVariant> Variant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    VARIANTMANAGERCONTENT_API FVariantDependency();
};

