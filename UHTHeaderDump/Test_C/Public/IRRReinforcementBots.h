#pragma once
#include "CoreMinimal.h"
#include "IRRReinforcementBots.generated.h"

class AIRRAIBaseCharacter;

USTRUCT(BlueprintType)
struct FIRRReinforcementBots {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIRRAIBaseCharacter>> Bots;
    
    TEST_C_API FIRRReinforcementBots();
};

