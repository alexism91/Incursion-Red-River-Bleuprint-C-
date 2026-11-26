#pragma once
#include "CoreMinimal.h"
#include "SceneComponentBackedTarget.h"
#include "ToolTarget.h"
#include "SceneComponentToolTarget.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USceneComponentToolTarget : public UToolTarget, public ISceneComponentBackedTarget {
    GENERATED_BODY()
public:
    USceneComponentToolTarget();


    // Fix for true pure virtual functions not being implemented
};

