#pragma once
#include "CoreMinimal.h"
#include "PCGWorldQueryActorFilterCache.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPCGWorldQueryActorFilterCache {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> FilterActors;
    
public:
    PCG_API FPCGWorldQueryActorFilterCache();
};

