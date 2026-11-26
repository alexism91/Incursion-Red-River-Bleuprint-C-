#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGControlFlowSettings.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGControlFlowSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPCGControlFlowSettings();

};

