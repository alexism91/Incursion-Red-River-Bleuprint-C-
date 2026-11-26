#pragma once
#include "CoreMinimal.h"
#include "SimpleFixedTimeBlendCameraNode.h"
#include "LinearBlendCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULinearBlendCameraNode : public USimpleFixedTimeBlendCameraNode {
    GENERATED_BODY()
public:
    ULinearBlendCameraNode();

};

