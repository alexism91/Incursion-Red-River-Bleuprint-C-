#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "ExtractCollisionGeometryTool.generated.h"

class UCollisionGeometryVisualizationProperties;
class UCreateMeshObjectTypeProperties;
class UExtractCollisionToolProperties;
class UPhysicsObjectToolPropertySet;
class UPreviewGeometry;
class UPreviewMesh;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExtractCollisionToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCollisionGeometryVisualizationProperties* VizSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsObjectToolPropertySet* ObjectProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* PreviewElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* PreviewMesh;
    
public:
    UExtractCollisionGeometryTool();

};

