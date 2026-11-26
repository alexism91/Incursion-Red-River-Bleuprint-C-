#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "MassTickableSubsystemBase.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, MinimalAPI, Config=Mass)
class UMassTickableSubsystemBase : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UMassTickableSubsystemBase();

};

