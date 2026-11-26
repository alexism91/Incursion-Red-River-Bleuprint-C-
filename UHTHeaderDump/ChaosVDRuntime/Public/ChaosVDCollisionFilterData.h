#pragma once
#include "CoreMinimal.h"
#include "ChaosVDCollisionFilterData.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDCollisionFilterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Word0;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Word1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Word2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Word3;
    
    CHAOSVDRUNTIME_API FChaosVDCollisionFilterData();
};

