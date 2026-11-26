#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRVoiceChatDebugOverlaySubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRVoiceChatDebugOverlaySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRVoiceChatDebugOverlaySubsystem();

};

