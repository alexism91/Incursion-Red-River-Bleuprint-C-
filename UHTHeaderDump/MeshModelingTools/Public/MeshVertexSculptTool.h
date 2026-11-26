#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=ModelingToolExternalDynamicMeshUpdateAPI -FallbackName=ModelingToolExternalDynamicMeshUpdateAPI
#include "MeshSculptToolBase.h"
#include "MeshVertexSculptTool.generated.h"

class AInternalToolFrameworkActor;
class UDynamicMeshComponent;
class UMeshSculptLayerProperties;
class UMeshSymmetryProperties;
class UTexture2D;
class UVertexBrushAlphaProperties;
class UVertexBrushSculptProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshVertexSculptTool : public UMeshSculptToolBase, public IInteractiveToolManageGeometrySelectionAPI, public IModelingToolExternalDynamicMeshUpdateAPI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexBrushSculptProperties* SculptProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexBrushAlphaProperties* AlphaProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BrushAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshSymmetryProperties* SymmetryProperties;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshSculptLayerProperties* SculptLayerProperties;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMeshComponent* DynamicMeshComponent;
    
public:
    UMeshVertexSculptTool();


    // Fix for true pure virtual functions not being implemented
};

