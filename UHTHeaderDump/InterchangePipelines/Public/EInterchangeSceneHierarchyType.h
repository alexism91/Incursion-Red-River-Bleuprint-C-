#pragma once
#include "CoreMinimal.h"
#include "EInterchangeSceneHierarchyType.generated.h"

UENUM(BlueprintType)
enum class EInterchangeSceneHierarchyType : uint8 {
    CreateLevelActors,
    CreateLevelInstanceActor,
    CreatePackedActor,
};

