#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolBuilder -FallbackName=InteractiveToolBuilder
#include "DrawPolygonToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UDrawPolygonToolBuilder();

};

