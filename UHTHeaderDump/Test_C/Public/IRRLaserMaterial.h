#pragma once
#include "CoreMinimal.h"
#include "IRRLaserMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FIRRLaserMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Laser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LaserDot;
    
    TEST_C_API FIRRLaserMaterial();
};

