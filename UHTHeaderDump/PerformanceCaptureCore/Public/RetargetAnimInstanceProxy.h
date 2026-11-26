#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "RetargetAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FRetargetAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    PERFORMANCECAPTURECORE_API FRetargetAnimInstanceProxy();
};

