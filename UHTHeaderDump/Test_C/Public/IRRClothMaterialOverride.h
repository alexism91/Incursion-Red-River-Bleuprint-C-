#pragma once
#include "CoreMinimal.h"
#include "IRRClothMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FIRRClothMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    TEST_C_API FIRRClothMaterialOverride();
};

