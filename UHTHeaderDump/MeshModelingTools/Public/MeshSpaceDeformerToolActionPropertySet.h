#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshSpaceDeformerToolActionPropertySet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UMeshSpaceDeformerToolActionPropertySet();

    UFUNCTION(BlueprintCallable)
    void ShiftToCenter();
    
};

