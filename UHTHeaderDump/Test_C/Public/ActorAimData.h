#pragma once
#include "CoreMinimal.h"
#include "ActorAimData.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FActorAimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimTime;
    
    FActorAimData();
};

