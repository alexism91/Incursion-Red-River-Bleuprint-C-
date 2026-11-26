#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertySelector.h"
#include "PCGAttributePropertyOutputNoSourceSelector.generated.h"

USTRUCT(BlueprintType)
struct FPCGAttributePropertyOutputNoSourceSelector : public FPCGAttributePropertySelector {
    GENERATED_BODY()
public:
    PCG_API FPCGAttributePropertyOutputNoSourceSelector();
};

