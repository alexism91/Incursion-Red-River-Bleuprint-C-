#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRAIDebugOverlaySubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRAIDebugOverlaySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRAIDebugOverlaySubsystem();

};

