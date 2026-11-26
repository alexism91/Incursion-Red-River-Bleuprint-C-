#pragma once
#include "CoreMinimal.h"
#include "NetworkPhysicsData.generated.h"

USTRUCT(BlueprintType)
struct FNetworkPhysicsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalFrame;
    
    ENGINE_API FNetworkPhysicsData();
};

