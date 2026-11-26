#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "SimpleLambdaInteractiveGizmoBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USimpleLambdaInteractiveGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    USimpleLambdaInteractiveGizmoBuilder();

};

