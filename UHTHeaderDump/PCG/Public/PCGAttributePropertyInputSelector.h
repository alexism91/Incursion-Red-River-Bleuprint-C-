#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertySelector.h"
#include "PCGAttributePropertyInputSelector.generated.h"

USTRUCT(BlueprintType)
struct FPCGAttributePropertyInputSelector : public FPCGAttributePropertySelector {
    GENERATED_BODY()
public:
    PCG_API FPCGAttributePropertyInputSelector();
};
FORCEINLINE uint32 GetTypeHash(const FPCGAttributePropertyInputSelector) { return 0; }

