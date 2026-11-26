#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "DragAlignmentMechanic.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDragAlignmentMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UDragAlignmentMechanic();

};

