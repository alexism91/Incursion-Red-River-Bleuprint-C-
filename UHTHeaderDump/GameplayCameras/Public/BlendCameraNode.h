#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "BlendCameraNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UBlendCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UBlendCameraNode();

};

