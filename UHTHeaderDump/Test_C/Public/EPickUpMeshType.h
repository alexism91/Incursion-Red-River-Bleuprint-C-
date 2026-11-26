#pragma once
#include "CoreMinimal.h"
#include "EPickUpMeshType.generated.h"

UENUM(BlueprintType)
enum class EPickUpMeshType : uint8 {
    SkeletalMesh,
    StaticMesh,
};

