#pragma once
#include "CoreMinimal.h"
#include "EGroomBindingAsyncProperties.generated.h"

UENUM()
enum class EGroomBindingAsyncProperties {
    None,
    GroomBindingType,
    Groom,
    SourceSkeletalMesh = 4,
    SourceMeshRequestedLOD = 8,
    SourceMeshUsedLOD = 16,
    TargetSkeletalMesh = 32,
    TargetMeshRequestedMinLOD = 64,
    TargetMeshUsedMinLOD = 128,
    SourceGeometryCache = 256,
    TargetGeometryCache = 512,
    NumInterpolationPoints = 1024,
    MatchingSection = 2048,
    GroupInfos = 4096,
    HairGroupResources = 8192,
    HairGroupPlatformData = 16384,
    TargetBindingAttribute = 32768,
    All = -1,
};

