#pragma once
#include "CoreMinimal.h"
#include "ToolTargetFactory.h"
#include "SceneComponentToolTargetFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USceneComponentToolTargetFactory : public UToolTargetFactory {
    GENERATED_BODY()
public:
    USceneComponentToolTargetFactory();

};

