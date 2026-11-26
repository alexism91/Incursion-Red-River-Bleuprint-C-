#pragma once
#include "CoreMinimal.h"
#include "BakeMeshAttributeTool.h"
#include "EBakeMapType.h"
#include "BakeMeshAttributeMapsToolBase.generated.h"

class UBakeVisualizationProperties;
class UMaterialInstanceDynamic;
class UPreviewMesh;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBakeVisualizationProperties* VisualizationProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BentNormalPreviewMaterial;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBakeMapType, UTexture2D*> CachedMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyNormalMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyColorMapBlack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EmptyColorMapWhite;
    
public:
    UBakeMeshAttributeMapsToolBase();

};

