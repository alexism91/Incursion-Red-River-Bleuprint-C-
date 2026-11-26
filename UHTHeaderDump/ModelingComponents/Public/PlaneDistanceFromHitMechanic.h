#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "PlaneDistanceFromHitMechanic.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPlaneDistanceFromHitMechanic();

};

