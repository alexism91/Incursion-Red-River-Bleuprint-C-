#pragma once
#include "CoreMinimal.h"
#include "ClusteredActorData.generated.h"

USTRUCT(BlueprintType)
struct FClusteredActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasReplicatingMovement;
    
    ENGINE_API FClusteredActorData();
};

