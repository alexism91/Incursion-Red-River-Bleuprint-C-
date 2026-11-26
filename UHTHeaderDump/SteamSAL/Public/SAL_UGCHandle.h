#pragma once
#include "CoreMinimal.h"
#include "SAL_UGCHandle.generated.h"

USTRUCT(BlueprintType)
struct STEAMSAL_API FSAL_UGCHandle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
    FSAL_UGCHandle();
};

