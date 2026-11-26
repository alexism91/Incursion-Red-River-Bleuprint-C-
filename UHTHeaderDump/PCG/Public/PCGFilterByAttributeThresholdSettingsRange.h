#pragma once
#include "CoreMinimal.h"
#include "PCGFilterByAttributeThresholdSettings.h"
#include "PCGFilterByAttributeThresholdSettingsRange.generated.h"

USTRUCT(BlueprintType)
struct FPCGFilterByAttributeThresholdSettingsRange : public FPCGFilterByAttributeThresholdSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInclusive;
    
    PCG_API FPCGFilterByAttributeThresholdSettingsRange();
};

