#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshGroupPaintToolActionPropertySet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshGroupPaintToolActionPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UMeshGroupPaintToolActionPropertySet();

};

