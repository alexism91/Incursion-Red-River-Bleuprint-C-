#pragma once
#include "CoreMinimal.h"
#include "MeshDrawCommandStatsBudgetTotals.generated.h"

USTRUCT(BlueprintType)
struct FMeshDrawCommandStatsBudgetTotals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimitiveBudget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Collection;
    
    ENGINE_API FMeshDrawCommandStatsBudgetTotals();
};

