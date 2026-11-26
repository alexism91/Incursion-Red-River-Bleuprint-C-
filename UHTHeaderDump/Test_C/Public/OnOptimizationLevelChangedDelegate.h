#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=EAIOptimizationLevel -FallbackName=EAIOptimizationLevel
#include "OnOptimizationLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOptimizationLevelChanged, EAIOptimizationLevel, NewLevel);

