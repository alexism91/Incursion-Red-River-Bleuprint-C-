#pragma once
#include "CoreMinimal.h"
#include "PCGCollapseSettings.h"
#include "PCGConvertToPointDataSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGConvertToPointDataSettings : public UPCGCollapseSettings {
    GENERATED_BODY()
public:
    UPCGConvertToPointDataSettings();

};

