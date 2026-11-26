#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeGraphAction_AddRemoveNodePair.h"
#include "OptimusNodeGraphAction_RemoveNodePair.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_RemoveNodePair : public FOptimusNodeGraphAction_AddRemoveNodePair {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_RemoveNodePair();
};

