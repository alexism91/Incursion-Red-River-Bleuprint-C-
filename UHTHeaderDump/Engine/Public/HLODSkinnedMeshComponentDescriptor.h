#pragma once
#include "CoreMinimal.h"
#include "SkinnedMeshComponentDescriptor.h"
#include "HLODSkinnedMeshComponentDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FHLODSkinnedMeshComponentDescriptor : public FSkinnedMeshComponentDescriptor {
    GENERATED_BODY()
public:
    ENGINE_API FHLODSkinnedMeshComponentDescriptor();
};

