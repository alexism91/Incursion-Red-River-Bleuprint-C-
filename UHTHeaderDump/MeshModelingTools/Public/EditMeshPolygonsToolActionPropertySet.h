#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EditMeshPolygonsToolActionPropertySet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolActionPropertySet();

};

