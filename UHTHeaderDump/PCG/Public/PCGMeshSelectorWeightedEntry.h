#pragma once
#include "CoreMinimal.h"
#include "PCGSoftISMComponentDescriptor.h"
#include "PCGMeshSelectorWeightedEntry.generated.h"

USTRUCT(BlueprintType)
struct FPCGMeshSelectorWeightedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGSoftISMComponentDescriptor Descriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    PCG_API FPCGMeshSelectorWeightedEntry();
};

