#pragma once
#include "CoreMinimal.h"
#include "PCGKernelAttributeKey.h"
#include "PCGKernelAttributeTable.generated.h"

USTRUCT(BlueprintType)
struct FPCGKernelAttributeTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGKernelAttributeKey> AttributeTable;
    
public:
    PCG_API FPCGKernelAttributeTable();
};

