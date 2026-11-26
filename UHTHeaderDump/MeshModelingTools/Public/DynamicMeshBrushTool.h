#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=BaseBrushTool -FallbackName=BaseBrushTool
#include "DynamicMeshBrushTool.generated.h"

class UPreviewMesh;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDynamicMeshBrushTool : public UBaseBrushTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* PreviewMesh;
    
public:
    UDynamicMeshBrushTool();

};

