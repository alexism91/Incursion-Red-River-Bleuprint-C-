#pragma once
#include "CoreMinimal.h"
#include "EPCGChangeType.generated.h"

UENUM()
enum class EPCGChangeType {
    None,
    Cosmetic,
    Settings,
    Input = 4,
    Edge = 8,
    Node = 16,
    Structural = 32,
    GenerationGrid = 64,
    ShaderSource = 128,
    GraphCustomization = 256,
};

