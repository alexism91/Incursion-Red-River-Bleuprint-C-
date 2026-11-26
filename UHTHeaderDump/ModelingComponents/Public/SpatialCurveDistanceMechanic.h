#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "SpatialCurveDistanceMechanic.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USpatialCurveDistanceMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    USpatialCurveDistanceMechanic();

};

