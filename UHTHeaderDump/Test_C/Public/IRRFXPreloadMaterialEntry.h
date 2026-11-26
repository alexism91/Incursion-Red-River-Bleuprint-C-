#pragma once
#include "CoreMinimal.h"
#include "IRRFXPreloadMaterialEntry.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRFXPreloadMaterialEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    FIRRFXPreloadMaterialEntry();
};

