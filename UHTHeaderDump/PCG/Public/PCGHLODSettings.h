#pragma once
#include "CoreMinimal.h"
#include "EPCGHLODSource.h"
#include "PCGHLODSettings.generated.h"

class UHLODLayer;

USTRUCT(BlueprintType)
struct FPCGHLODSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGHLODSource HLODSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHLODLayer* HLODLayer;
    
    PCG_API FPCGHLODSettings();
};

