#pragma once
#include "CoreMinimal.h"
#include "IRRAppearanceMaterialOverride.h"
#include "IRRAppearanceMaterialVariant.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAppearanceMaterialVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAppearanceMaterialOverride> Overrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FIRRAppearanceMaterialVariant();
};

