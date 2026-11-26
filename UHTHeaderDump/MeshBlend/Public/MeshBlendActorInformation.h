#pragma once
#include "CoreMinimal.h"
#include "ActorBounds.h"
#include "MeshBlendActorInformation.generated.h"

USTRUCT(BlueprintType)
struct FMeshBlendActorInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBounds Bounds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SkipCheckingUntil;
    
    MESHBLEND_API FMeshBlendActorInformation();
};

