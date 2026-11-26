#pragma once
#include "CoreMinimal.h"
#include "PCGSpawnerPrimitive.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FPCGSpawnerPrimitive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInstances;
    
    PCG_API FPCGSpawnerPrimitive();
};

