#pragma once
#include "CoreMinimal.h"
#include "EPCGDataType.generated.h"

UENUM()
enum class EPCGDataType : uint32 {
    None,
    Point = 2,
    Spline = 4,
    LandscapeSpline = 8,
    PolyLine = 12,
    Landscape = 16,
    Texture = 32,
    RenderTarget = 64,
    VirtualTexture = 4096,
    BaseTexture = 96,
    Surface = 4208,
    Volume = 128,
    Primitive = 256,
    DynamicMesh = 1024,
    StaticMeshResource = 2048,
    Concrete = 5630,
    Composite = 512,
    Spatial = 6142,
    Resource = StaticMeshResource,
    ProxyForGPU = 67108864,
    Param = 134217728,
    PointOrParam = 134217730,
    Settings = 268435456,
    Other = 536870912,
    Any = 1073741823,
};

