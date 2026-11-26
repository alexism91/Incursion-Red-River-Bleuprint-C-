#pragma once
#include "CoreMinimal.h"
#include "EPCGKernelAttributeType.h"
#include "PCGAttributeIdentifier.h"
#include "PCGAttributePropertyOutputNoSourceSelector.h"
#include "PCGKernelAttributeKey.generated.h"

USTRUCT(BlueprintType)
struct FPCGKernelAttributeKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributeIdentifier Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGKernelAttributeType Type;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputNoSourceSelector Name;
    
public:
    PCG_API FPCGKernelAttributeKey();
};

