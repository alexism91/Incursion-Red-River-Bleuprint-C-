#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiTargetWithSelectionTool -FallbackName=MultiTargetWithSelectionTool
#include "SplitMeshesTool.generated.h"

class UCreateMeshObjectTypeProperties;
class UMaterialInterface;
class UPreviewGeometry;
class USplitMeshesToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USplitMeshesTool : public UMultiTargetWithSelectionTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USplitMeshesToolProperties* BasicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPreviewGeometry*> PerTargetPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PreviewMaterial;
    
public:
    USplitMeshesTool();

};

