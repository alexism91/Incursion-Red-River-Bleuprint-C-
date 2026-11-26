#pragma once
#include "CoreMinimal.h"
#include "OnRotationTaskFinishedDelegate.generated.h"

class AAIController;
class UUPSAITask_AIRotateToTarget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRotationTaskFinished, AAIController*, AIC, UUPSAITask_AIRotateToTarget*, FinishedTask);

