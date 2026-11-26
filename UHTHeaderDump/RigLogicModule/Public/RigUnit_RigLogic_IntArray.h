#pragma once
#include "CoreMinimal.h"
#include "RigUnit_RigLogic_IntArray.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_RigLogic_IntArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> Values;
    
    RIGLOGICMODULE_API FRigUnit_RigLogic_IntArray();
};

