#pragma once
#include "CoreMinimal.h"
#include "ActorInstanceHandle.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FActorInstanceHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> ReferenceObject;
    
public:
    ENGINE_API FActorInstanceHandle();
};

