#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "Input2DCameraNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UInput2DCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UInput2DCameraNode();

};

