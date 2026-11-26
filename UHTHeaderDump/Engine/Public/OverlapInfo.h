#pragma once
#include "CoreMinimal.h"
#include "HitResult.h"
#include "OverlapInfo.generated.h"

USTRUCT(BlueprintType)
struct FOverlapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFromSweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult OverlapInfo;
    
    ENGINE_API FOverlapInfo();
};

