#pragma once
#include "CoreMinimal.h"
#include "StateTreeConsiderationCommonBase.h"
#include "StateTreeConsiderationResponseCurve.h"
#include "StateTreeFloatInputConsideration.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeFloatInputConsideration : public FStateTreeConsiderationCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeConsiderationResponseCurve ResponseCurve;
    
    STATETREEMODULE_API FStateTreeFloatInputConsideration();
};

