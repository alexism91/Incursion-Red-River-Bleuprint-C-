#pragma once
#include "CoreMinimal.h"
#include "PCGSkinnedMeshPackedCustomData.generated.h"

USTRUCT(BlueprintType)
struct FPCGSkinnedMeshPackedCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCustomDataFloats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CustomData;
    
    PCG_API FPCGSkinnedMeshPackedCustomData();
};

