#pragma once
#include "CoreMinimal.h"
#include "IRRClothMaterialOverride.h"
#include "IRRClothMaterialVariant.generated.h"

USTRUCT(BlueprintType)
struct FIRRClothMaterialVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRClothMaterialOverride> Overrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    TEST_C_API FIRRClothMaterialVariant();
};

