#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "UVLayoutTool.generated.h"

class UExistingMeshMaterialProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UMeshUVChannelProperties;
class UUVLayoutOperatorFactory;
class UUVLayoutPreview;
class UUVLayoutProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UUVLayoutTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshUVChannelProperties* UVChannelProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUVLayoutProperties* BasicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExistingMeshMaterialProperties* MaterialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUVLayoutOperatorFactory*> Factories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUVLayoutPreview* UVLayoutView;
    
public:
    UUVLayoutTool();


    // Fix for true pure virtual functions not being implemented
};

