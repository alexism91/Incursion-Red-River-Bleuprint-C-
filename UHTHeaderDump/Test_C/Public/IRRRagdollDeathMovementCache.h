#pragma once
#include "CoreMinimal.h"
#include "IRRRagdollDeathMovementCache.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRRagdollDeathMovementCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength0To1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingDuration;
    
    FIRRRagdollDeathMovementCache();
};

