#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "CameraComponentCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UCameraComponentCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UCameraComponentCameraNode();

};

