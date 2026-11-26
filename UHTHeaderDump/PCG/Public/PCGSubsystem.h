#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "PCGSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPCGSubsystem();

};

