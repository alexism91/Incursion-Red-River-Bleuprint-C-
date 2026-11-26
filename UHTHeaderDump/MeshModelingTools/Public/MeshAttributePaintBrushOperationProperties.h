#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBrushActionMode.h"
#include "MeshAttributePaintBrushOperationProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshAttributePaintBrushOperationProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsolateGeometrySelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToolHasSelection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrushActionMode BrushAction;
    
    UMeshAttributePaintBrushOperationProperties();

};

