#pragma once
#include "CoreMinimal.h"
#include "UPSGroupMovementAIController.h"
#include "UPSGroupMovementAIC_Crowd.generated.h"

UCLASS(Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSGroupMovementAIC_Crowd : public AUPSGroupMovementAIController {
    GENERATED_BODY()
public:
    AUPSGroupMovementAIC_Crowd(const FObjectInitializer& ObjectInitializer);

};

