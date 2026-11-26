#pragma once
#include "CoreMinimal.h"
#include "ESetCollisionGeometryInputMode.generated.h"

UENUM()
enum class ESetCollisionGeometryInputMode : int32 {
    CombineAll,
    PerInputObject,
    PerMeshComponent,
    PerMeshGroup,
};

