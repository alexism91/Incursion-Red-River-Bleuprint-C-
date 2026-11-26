#pragma once
#include "CoreMinimal.h"
#include "PCGPreconfiguredInfo.h"
#include "PCGPreConfiguredSettingsInfo.generated.h"

USTRUCT(BlueprintType)
struct FPCGPreConfiguredSettingsInfo : public FPCGPreconfiguredInfo {
    GENERATED_BODY()
public:
    PCG_API FPCGPreConfiguredSettingsInfo();
};

