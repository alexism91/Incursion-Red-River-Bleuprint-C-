#pragma once
#include "CoreMinimal.h"
#include "PreviewGeometry.h"
#include "MeshElementsVisualizer.generated.h"

class UMeshElementsVisualizerProperties;
class UMeshWireframeComponent;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshElementsVisualizer : public UPreviewGeometry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshElementsVisualizerProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshWireframeComponent* WireframeComponent;
    
    UMeshElementsVisualizer();

};

