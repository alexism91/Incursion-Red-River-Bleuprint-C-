#pragma once
#include "CoreMinimal.h"
#include "PrimitiveMaterial.h"
#include "PrimitiveMaterials.generated.h"

USTRUCT(BlueprintType)
struct FPrimitiveMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimitiveMaterial> PrimitiveMaterials;
    
    LXR_API FPrimitiveMaterials();
};

