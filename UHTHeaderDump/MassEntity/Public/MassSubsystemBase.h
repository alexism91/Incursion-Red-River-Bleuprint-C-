#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "MassSubsystemBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, MinimalAPI, Config=Mass)
class UMassSubsystemBase : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UMassSubsystemBase();

};

