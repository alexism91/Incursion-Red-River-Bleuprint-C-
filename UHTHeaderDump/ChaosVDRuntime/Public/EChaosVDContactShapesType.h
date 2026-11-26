#pragma once
#include "CoreMinimal.h"
#include "EChaosVDContactShapesType.generated.h"

UENUM()
enum class EChaosVDContactShapesType : int32 {
    Unknown,
    SphereSphere,
    SphereCapsule,
    SphereBox,
    SphereConvex,
    SphereTriMesh,
    SphereHeightField,
    SpherePlane,
    CapsuleCapsule,
    CapsuleBox,
    CapsuleConvex,
    CapsuleTriMesh,
    CapsuleHeightField,
    BoxBox,
    BoxConvex,
    BoxTriMesh,
    BoxHeightField,
    BoxPlane,
    ConvexConvex,
    ConvexTriMesh,
    ConvexHeightField,
    GenericConvexConvex,
    LevelSetLevelSet,
    NumShapesTypes,
};

