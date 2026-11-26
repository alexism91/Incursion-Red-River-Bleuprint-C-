#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "InteractiveToolActivity.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UInteractiveToolActivity : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UInteractiveToolActivity();

};

