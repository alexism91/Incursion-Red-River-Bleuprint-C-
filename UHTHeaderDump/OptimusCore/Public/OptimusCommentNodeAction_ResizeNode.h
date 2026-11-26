#pragma once
#include "CoreMinimal.h"
#include "OptimusAction.h"
#include "OptimusCommentNodeAction_ResizeNode.generated.h"

USTRUCT(BlueprintType)
struct FOptimusCommentNodeAction_ResizeNode : public FOptimusAction {
    GENERATED_BODY()
public:
    OPTIMUSCORE_API FOptimusCommentNodeAction_ResizeNode();
};

