#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedTool -FallbackName=BaseCreateFromSelectedTool
#include "CSGMeshesTool.generated.h"

class UCSGMeshesToolProperties;
class ULineSetComponent;
class UMaterialInstanceDynamic;
class UPreviewMesh;
class UTrimMeshesToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCSGMeshesTool : public UBaseCreateFromSelectedTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCSGMeshesToolProperties* CSGProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrimMeshesToolProperties* TrimProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPreviewMesh*> OriginalMeshPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PreviewsGhostMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULineSetComponent* DrawnLineSet;
    
public:
    UCSGMeshesTool();

};

