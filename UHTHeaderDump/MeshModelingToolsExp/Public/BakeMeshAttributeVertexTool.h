#pragma once
#include "CoreMinimal.h"
#include "BakeMeshAttributeTool.h"
#include "BakeMeshAttributeVertexTool.generated.h"

class UBakeInputMeshProperties;
class UBakeMeshAttributeVertexToolProperties;
class UMaterialInstanceDynamic;
class UPreviewMesh;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeInputMeshProperties* InputMeshSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeMeshAttributeVertexToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PreviewAlphaMaterial;
    
public:
    UBakeMeshAttributeVertexTool();

};

