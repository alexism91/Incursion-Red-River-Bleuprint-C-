#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreeTaskBase -FallbackName=StateTreeTaskBase
#include "GameplayCamerasStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCamerasStateTreeTask : public FStateTreeTaskBase {
    GENERATED_BODY()
public:
    GAMEPLAYCAMERAS_API FGameplayCamerasStateTreeTask();
};

