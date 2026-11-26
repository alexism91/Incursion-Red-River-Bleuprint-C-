#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRAudioRoomsDebugOverlaySubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRAudioRoomsDebugOverlaySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRAudioRoomsDebugOverlaySubsystem();

};

