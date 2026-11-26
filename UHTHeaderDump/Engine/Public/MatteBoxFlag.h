#pragma once
#include "CoreMinimal.h"
#include "MatteBoxFlag.generated.h"

USTRUCT(BlueprintType)
struct FMatteBoxFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Length;
    
    ENGINE_API FMatteBoxFlag();
};

