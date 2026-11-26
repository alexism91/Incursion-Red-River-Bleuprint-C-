#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiTargetWithSelectionTool -FallbackName=MultiTargetWithSelectionTool
#include "UVTransferTool.generated.h"

class UExistingMeshMaterialProperties;
class UMeshElementsVisualizer;
class UMeshOpPreviewWithBackgroundCompute;
class UMeshUVChannelProperties;
class UPreviewMesh;
class UUVTransferToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UUVTransferTool : public UMultiTargetWithSelectionTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUVTransferToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshUVChannelProperties* UVChannelProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExistingMeshMaterialProperties* DestinationMaterialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* DestinationPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* SourcePreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshElementsVisualizer* SourceSeamVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshElementsVisualizer* DestinationSeamVisualizer;
    
public:
    UUVTransferTool();


    // Fix for true pure virtual functions not being implemented
};

