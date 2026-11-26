#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=SingleClickTool -FallbackName=SingleClickTool
#include "AddPatchTool.generated.h"

class UAddPatchToolProperties;
class UNewMeshMaterialProperties;
class UPreviewMesh;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UAddPatchTool : public USingleClickTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAddPatchToolProperties* ShapeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* PreviewMesh;
    
public:
    UAddPatchTool();

};

