#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "ScreenSpaceFogScatteringSubsystem.generated.h"

UCLASS(Blueprintable)
class UScreenSpaceFogScatteringSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UScreenSpaceFogScatteringSubsystem();

};

