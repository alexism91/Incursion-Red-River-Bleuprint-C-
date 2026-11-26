#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyOutputNoSourceSelector.h"
#include "PCGAttributePropertyOutputSelector.generated.h"

USTRUCT(BlueprintType)
struct FPCGAttributePropertyOutputSelector : public FPCGAttributePropertyOutputNoSourceSelector {
    GENERATED_BODY()
public:
    PCG_API FPCGAttributePropertyOutputSelector();
};

