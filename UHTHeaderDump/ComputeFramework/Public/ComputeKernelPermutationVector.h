#pragma once
#include "CoreMinimal.h"
#include "ComputeKernelPermutationVector.generated.h"

USTRUCT(BlueprintType)
struct FComputeKernelPermutationVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, uint32> Permutations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BitCount;
    
    COMPUTEFRAMEWORK_API FComputeKernelPermutationVector();
};

