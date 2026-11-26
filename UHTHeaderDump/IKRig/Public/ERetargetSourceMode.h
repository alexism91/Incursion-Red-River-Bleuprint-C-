#pragma once
#include "CoreMinimal.h"
#include "ERetargetSourceMode.generated.h"

UENUM(BlueprintType)
enum class ERetargetSourceMode : uint8 {
    ParentSkeletalMeshComponent,
    CustomSkeletalMeshComponent,
    SourcePosePin,
};

