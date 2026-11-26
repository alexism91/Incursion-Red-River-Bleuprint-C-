#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=ModelingToolExternalDynamicMeshUpdateAPI -FallbackName=ModelingToolExternalDynamicMeshUpdateAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiTargetWithSelectionTool -FallbackName=MultiTargetWithSelectionTool
#include "LatticeDeformerTool.generated.h"

class ULatticeControlPointsMechanic;
class ULatticeDeformerToolProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UMeshSculptLayerProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ULatticeDeformerTool : public UMultiTargetWithSelectionTool, public IInteractiveToolManageGeometrySelectionAPI, public IModelingToolExternalDynamicMeshUpdateAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULatticeControlPointsMechanic* ControlPointsMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULatticeDeformerToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshSculptLayerProperties* SculptLayerProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLatticeDeformed;
    
public:
    ULatticeDeformerTool();


    // Fix for true pure virtual functions not being implemented
};

