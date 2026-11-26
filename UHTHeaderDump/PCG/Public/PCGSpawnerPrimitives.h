#pragma once
#include "CoreMinimal.h"
#include "PCGSpawnerPrimitive.h"
#include "PCGSpawnerPrimitives.generated.h"

USTRUCT(BlueprintType)
struct FPCGSpawnerPrimitives {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGSpawnerPrimitive> Primitives;
    
    PCG_API FPCGSpawnerPrimitives();
};

