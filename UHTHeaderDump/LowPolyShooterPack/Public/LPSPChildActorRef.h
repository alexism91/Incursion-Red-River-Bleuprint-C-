#pragma once
#include "CoreMinimal.h"
#include "LPSPChildActorRef.generated.h"

USTRUCT(BlueprintType)
struct LOWPOLYSHOOTERPACK_API FLPSPChildActorRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    FLPSPChildActorRef();
};

