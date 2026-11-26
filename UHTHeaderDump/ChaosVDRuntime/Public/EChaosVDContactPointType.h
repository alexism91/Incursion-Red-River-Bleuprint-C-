#pragma once
#include "CoreMinimal.h"
#include "EChaosVDContactPointType.generated.h"

UENUM()
enum class EChaosVDContactPointType : int8 {
    Unknown,
    VertexPlane,
    EdgeEdge,
    PlaneVertex,
    VertexVertex,
};

