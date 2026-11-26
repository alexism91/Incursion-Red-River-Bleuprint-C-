#pragma once
#include "CoreMinimal.h"
#include "SceneComponentInstanceData.h"
#include "SkeletalMeshComponentInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    ENGINE_API FSkeletalMeshComponentInstanceData();
};

