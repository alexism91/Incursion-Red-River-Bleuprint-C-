#pragma once
#include "CoreMinimal.h"
#include "HairGroupsMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FHairGroupsMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    HAIRSTRANDSCORE_API FHairGroupsMaterial();
};

