#pragma once
#include "CoreMinimal.h"
#include "CameraNodeEvaluatorAllocationInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraNodeEvaluatorAllocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 TotalSizeof;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 MaxAlignof;
    
    GAMEPLAYCAMERAS_API FCameraNodeEvaluatorAllocationInfo();
};

