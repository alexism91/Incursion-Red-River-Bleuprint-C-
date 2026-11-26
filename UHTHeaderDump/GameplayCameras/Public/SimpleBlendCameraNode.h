#pragma once
#include "CoreMinimal.h"
#include "BlendCameraNode.h"
#include "SimpleBlendCameraNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class USimpleBlendCameraNode : public UBlendCameraNode {
    GENERATED_BODY()
public:
    USimpleBlendCameraNode();

};

