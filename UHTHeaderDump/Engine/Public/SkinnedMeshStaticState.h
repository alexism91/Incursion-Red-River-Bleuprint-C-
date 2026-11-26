#pragma once
#include "CoreMinimal.h"
#include "SkinnedMeshStaticState.generated.h"

USTRUCT(BlueprintType)
struct FSkinnedMeshStaticState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 MaterialRelevance;
    
    ENGINE_API FSkinnedMeshStaticState();
};

