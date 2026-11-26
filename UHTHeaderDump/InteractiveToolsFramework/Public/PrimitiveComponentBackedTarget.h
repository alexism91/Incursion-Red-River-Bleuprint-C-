#pragma once
#include "CoreMinimal.h"
#include "SceneComponentBackedTarget.h"
#include "PrimitiveComponentBackedTarget.generated.h"

UINTERFACE(MinimalAPI)
class UPrimitiveComponentBackedTarget : public USceneComponentBackedTarget {
    GENERATED_BODY()
};

class IPrimitiveComponentBackedTarget : public ISceneComponentBackedTarget {
    GENERATED_BODY()
public:
};

