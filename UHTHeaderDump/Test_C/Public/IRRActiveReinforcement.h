#pragma once
#include "CoreMinimal.h"
#include "IRRActiveReinforcement.generated.h"

class AIRRReinforcementExecPoint;

USTRUCT(BlueprintType)
struct FIRRActiveReinforcement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIRRReinforcementExecPoint* ExecPoint;
    
    TEST_C_API FIRRActiveReinforcement();
};

