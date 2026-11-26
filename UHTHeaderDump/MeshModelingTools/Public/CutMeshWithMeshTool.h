#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedTool -FallbackName=BaseCreateFromSelectedTool
#include "CutMeshWithMeshTool.generated.h"

class UCutMeshWithMeshToolProperties;
class ULineSetComponent;
class UPreviewMesh;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCutMeshWithMeshTool : public UBaseCreateFromSelectedTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCutMeshWithMeshToolProperties* CutProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* IntersectPreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULineSetComponent* DrawnLineSet;
    
public:
    UCutMeshWithMeshTool();

};

