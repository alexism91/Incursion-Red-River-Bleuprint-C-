#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshAttributePaintEditActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UMeshAttributePaintEditActions();

};

