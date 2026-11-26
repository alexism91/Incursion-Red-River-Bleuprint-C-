#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugCameraController -FallbackName=DebugCameraController
#include "IRRDebugCameraController.generated.h"

UCLASS(Blueprintable, NoExport)
class AIRRDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    AIRRDebugCameraController(const FObjectInitializer& ObjectInitializer);

};

