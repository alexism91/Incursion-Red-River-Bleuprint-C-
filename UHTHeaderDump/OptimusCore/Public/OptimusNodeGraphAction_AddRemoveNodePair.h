#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusNodeGraphAction_AddRemoveNodePair.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_AddRemoveNodePair : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_AddRemoveNodePair();
};

