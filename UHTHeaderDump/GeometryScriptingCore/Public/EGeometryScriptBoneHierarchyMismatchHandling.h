#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBoneHierarchyMismatchHandling.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBoneHierarchyMismatchHandling : uint8 {
    DoNothing,
    RemapGeometryToReferenceSkeleton,
    CreateNewReferenceSkeleton,
};

