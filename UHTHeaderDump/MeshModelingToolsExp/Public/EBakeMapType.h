#pragma once
#include "CoreMinimal.h"
#include "EBakeMapType.generated.h"

UENUM()
enum class EBakeMapType : int32 {
    None,
    TangentSpaceNormal,
    ObjectSpaceNormal,
    FaceNormal = 4,
    BentNormal = 8,
    Position = 16,
    Curvature = 32,
    AmbientOcclusion = 64,
    Texture = 128,
    MultiTexture = 256,
    VertexColor = 512,
    MaterialID = 1024,
    PolyGroupID = 2048,
    One = 4096,
    Zero = 8192,
    UVShell = 16384,
    Height = 32768,
    All = 32767,
};

