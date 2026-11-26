#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "RootCameraNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class URootCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    URootCameraNode();

};

