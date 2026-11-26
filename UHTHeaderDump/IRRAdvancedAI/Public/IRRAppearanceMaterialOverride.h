#pragma once
#include "CoreMinimal.h"
#include "IRRAppearanceMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAppearanceMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    FIRRAppearanceMaterialOverride();
};

