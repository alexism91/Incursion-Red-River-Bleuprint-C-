#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "CollectSurfacePathMechanic.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCollectSurfacePathMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UCollectSurfacePathMechanic();

};

