#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "Input1DCameraNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UInput1DCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UInput1DCameraNode();

};

