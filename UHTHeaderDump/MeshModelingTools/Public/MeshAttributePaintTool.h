#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
#include "DynamicMeshBrushTool.h"
#include "MeshAttributePaintTool.generated.h"

class UMeshAttributePaintBrushOperationProperties;
class UMeshAttributePaintToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshAttributePaintTool : public UDynamicMeshBrushTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshAttributePaintBrushOperationProperties* BrushActionProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshAttributePaintToolProperties* AttribProps;
    
public:
    UMeshAttributePaintTool();


    // Fix for true pure virtual functions not being implemented
};

