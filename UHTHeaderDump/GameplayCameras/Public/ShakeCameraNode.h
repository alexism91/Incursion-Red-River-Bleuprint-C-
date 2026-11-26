#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "ShakeCameraNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UShakeCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UShakeCameraNode();

};

