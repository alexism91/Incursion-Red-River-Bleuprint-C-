#pragma once
#include "CoreMinimal.h"
#include "DelayedGroupMovement.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FDelayedGroupMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MovementTargetActor;
    
    FDelayedGroupMovement();
};

