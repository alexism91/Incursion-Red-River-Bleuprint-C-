#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "RemoveOccludedTrianglesTool.generated.h"

class UMeshOpPreviewWithBackgroundCompute;
class UPolygroupLayersProperties;
class UPreviewMesh;
class URemoveOccludedTrianglesAdvancedProperties;
class URemoveOccludedTrianglesToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URemoveOccludedTrianglesToolProperties* BasicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygroupLayersProperties* PolygroupLayersProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPreviewMesh*> PreviewCopies;
    
public:
    URemoveOccludedTrianglesTool();

};

