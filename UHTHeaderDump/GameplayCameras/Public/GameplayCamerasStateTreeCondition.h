#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreeConditionBase -FallbackName=StateTreeConditionBase
#include "GameplayCamerasStateTreeCondition.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCamerasStateTreeCondition : public FStateTreeConditionBase {
    GENERATED_BODY()
public:
    GAMEPLAYCAMERAS_API FGameplayCamerasStateTreeCondition();
};

