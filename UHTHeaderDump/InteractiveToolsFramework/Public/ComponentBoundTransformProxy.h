#pragma once
#include "CoreMinimal.h"
#include "TransformProxy.h"
#include "ComponentBoundTransformProxy.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UComponentBoundTransformProxy : public UTransformProxy {
    GENERATED_BODY()
public:
    UComponentBoundTransformProxy();

};

