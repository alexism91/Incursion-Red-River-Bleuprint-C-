#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGBaseSubgraphSettings.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGBaseSubgraphSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPCGBaseSubgraphSettings();

};

