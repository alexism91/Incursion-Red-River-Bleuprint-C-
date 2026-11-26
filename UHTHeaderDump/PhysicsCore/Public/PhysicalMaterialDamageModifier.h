#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterialDamageModifier.generated.h"

USTRUCT(BlueprintType)
struct FPhysicalMaterialDamageModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageThresholdMultiplier;
    
    PHYSICSCORE_API FPhysicalMaterialDamageModifier();
};

