#pragma once
#include "CoreMinimal.h"
#include "OverriddenPropertyNodeID.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FOverriddenPropertyNodeID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
public:
    COREUOBJECT_API FOverriddenPropertyNodeID();
};
FORCEINLINE uint32 GetTypeHash(const FOverriddenPropertyNodeID) { return 0; }

