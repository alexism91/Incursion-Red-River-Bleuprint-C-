#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolBuilder -FallbackName=InteractiveToolBuilder
#include "BaseMeshFromSplinesToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseMeshFromSplinesToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UBaseMeshFromSplinesToolBuilder();

};

