#pragma once
#include "CoreMinimal.h"
#include "IRRPendingPossession.generated.h"

class AIRRAIBaseCharacter;
class AIRRAISpawnPoint;

USTRUCT(BlueprintType)
struct FIRRPendingPossession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIRRAISpawnPoint> SpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIRRAIBaseCharacter> Character;
    
    TEST_C_API FIRRPendingPossession();
};

