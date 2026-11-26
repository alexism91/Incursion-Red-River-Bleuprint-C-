#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolExclusiveToolAPI -FallbackName=InteractiveToolExclusiveToolAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "BakeMeshAttributeTool.generated.h"

class UBakeCurvatureMapToolProperties;
class UBakeHeightMapToolProperties;
class UBakeMultiTexture2DProperties;
class UBakeOcclusionMapToolProperties;
class UBakeTexture2DProperties;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolExclusiveToolAPI, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeOcclusionMapToolProperties* OcclusionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeCurvatureMapToolProperties* CurvatureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeTexture2DProperties* TextureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeMultiTexture2DProperties* MultiTextureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeHeightMapToolProperties* HeightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WorkingPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ErrorPreviewMaterial;
    
public:
    UBakeMeshAttributeTool();


    // Fix for true pure virtual functions not being implemented
};

