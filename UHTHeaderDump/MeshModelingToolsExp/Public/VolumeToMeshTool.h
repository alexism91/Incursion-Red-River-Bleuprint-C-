#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
#include "VolumeToMeshTool.generated.h"

class AVolume;
class UCreateMeshObjectTypeProperties;
class ULineSetComponent;
class UPreviewMesh;
class UVolumeToMeshToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVolumeToMeshTool : public UInteractiveTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVolumeToMeshToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<AVolume> TargetVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULineSetComponent* VolumeEdgesSet;
    
public:
    UVolumeToMeshTool();

};

