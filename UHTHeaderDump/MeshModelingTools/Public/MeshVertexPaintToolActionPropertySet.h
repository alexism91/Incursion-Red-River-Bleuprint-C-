#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshVertexPaintToolActionPropertySet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshVertexPaintToolActionPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UMeshVertexPaintToolActionPropertySet();

};

