#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionTool -FallbackName=SingleTargetWithSelectionTool
#include "ConvertToPolygonsTool.generated.h"

class UConvertToPolygonsToolProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UPolygroupLayersProperties;
class UPreviewGeometry;
class UPreviewMesh;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UConvertToPolygonsTool : public USingleTargetWithSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConvertToPolygonsToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygroupLayersProperties* CopyFromLayerProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* PreviewCompute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* PreviewGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* UnmodifiedAreaPreviewMesh;
    
public:
    UConvertToPolygonsTool();

};

