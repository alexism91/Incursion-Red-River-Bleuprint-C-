#pragma once
#include "CoreMinimal.h"
#include "ERotationRepresentation.generated.h"

UENUM(BlueprintType)
enum class ERotationRepresentation : uint8 {
    EulerAngles,
    Quaternion,
};

