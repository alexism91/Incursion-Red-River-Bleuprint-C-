#pragma once
#include "CoreMinimal.h"
#include "InertializationRequest.h"
#include "AnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FAnimInstanceProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FInertializationRequest> SlotGroupInertializationRequestDataMap;
    
public:
    ENGINE_API FAnimInstanceProxy();
};

