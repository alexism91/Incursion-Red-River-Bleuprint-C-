#pragma once
#include "CoreMinimal.h"
#include "ChaosVDConnectivityEdge.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDConnectivityEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SiblingParticleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strain;
    
    CHAOSVDRUNTIME_API FChaosVDConnectivityEdge();
};

