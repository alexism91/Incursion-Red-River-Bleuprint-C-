#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGObjectPropertyOverrideDescription.generated.h"

USTRUCT(BlueprintType)
struct FPCGObjectPropertyOverrideDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyTarget;
    
    PCG_API FPCGObjectPropertyOverrideDescription();
};

