#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "StateTreeFloatInputConsiderationInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeFloatInputConsiderationInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Input;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Interval;
    
    STATETREEMODULE_API FStateTreeFloatInputConsiderationInstanceData();
};

