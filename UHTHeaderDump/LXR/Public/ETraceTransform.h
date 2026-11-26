#pragma once
#include "CoreMinimal.h"
#include "ETraceTransform.generated.h"

UENUM()
enum class ETraceTransform : int32 {
    None,
    Actor,
    ActorEyesViewPoint,
    Socket,
    Custom,
    MethodObject,
};

