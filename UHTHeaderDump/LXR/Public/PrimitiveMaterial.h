#pragma once
#include "CoreMinimal.h"
#include "PrimitiveMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FPrimitiveMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    LXR_API FPrimitiveMaterial();
};

