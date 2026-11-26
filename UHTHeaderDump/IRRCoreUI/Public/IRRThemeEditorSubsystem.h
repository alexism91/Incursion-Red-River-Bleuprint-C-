#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "IRRThemeEditorSubsystem.generated.h"

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRThemeEditorSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UIRRThemeEditorSubsystem();

};

