#pragma once
#include "CoreMinimal.h"
#include "EDNADataLayer.generated.h"

UENUM(BlueprintType)
enum class EDNADataLayer : uint8 {
    None,
    Descriptor,
    Definition = 3,
    Behavior = 7,
    Geometry = 11,
    GeometryWithoutBlendShapes = 19,
    MachineLearnedBehavior = 35,
    RBFBehavior = 71,
    All = 111,
};

