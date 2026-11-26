#pragma once
#include "CoreMinimal.h"
#include "OptimusValueIdentifier.h"
#include "OptimusDataInterfacePropertyOverrideInfo.generated.h"

USTRUCT(BlueprintType)
struct FOptimusDataInterfacePropertyOverrideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FOptimusValueIdentifier> PinNameToValueIdMap;
    
    OPTIMUSCORE_API FOptimusDataInterfacePropertyOverrideInfo();
};

