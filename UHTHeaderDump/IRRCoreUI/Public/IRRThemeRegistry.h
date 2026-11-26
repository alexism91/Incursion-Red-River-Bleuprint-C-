#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "IRRThemeRegistry.generated.h"

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRThemeRegistry : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UIRRThemeRegistry();

};

