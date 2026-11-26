#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "StateTreeConsiderationResponseCurve.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeConsiderationResponseCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve CurveInfo;
    
    STATETREEMODULE_API FStateTreeConsiderationResponseCurve();
};

