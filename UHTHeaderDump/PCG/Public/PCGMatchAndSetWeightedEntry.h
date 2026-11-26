#pragma once
#include "CoreMinimal.h"
#include "PCGMetadataTypesConstantStruct.h"
#include "PCGMatchAndSetWeightedEntry.generated.h"

USTRUCT(BlueprintType)
struct FPCGMatchAndSetWeightedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGMetadataTypesConstantStruct Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    PCG_API FPCGMatchAndSetWeightedEntry();
};

