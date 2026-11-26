#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnDesignationCompromiseAppliedDelegate.generated.h"

class AIRRPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDesignationCompromiseApplied, AIRRPlayerController*, Operator, FVector, OperatorLocation);

