#pragma once
#include "CoreMinimal.h"
#include "OptimusNodeGraphAction_AddRemoveNodePair.h"
#include "OptimusNodeGraphAction_AddNodePair.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNodeGraphAction_AddNodePair : public FOptimusNodeGraphAction_AddRemoveNodePair {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusNodeGraphAction_AddNodePair();
};

