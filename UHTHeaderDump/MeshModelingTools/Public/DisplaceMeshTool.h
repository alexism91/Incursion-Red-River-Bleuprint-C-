#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionTool -FallbackName=SingleTargetWithSelectionTool
#include "DisplaceMeshTool.generated.h"

class AInternalToolFrameworkActor;
class UCurveFloat;
class UDisplaceMeshCommonProperties;
class UDisplaceMeshDirectionalFilterProperties;
class UDisplaceMeshPerlinNoiseProperties;
class UDisplaceMeshSineWaveProperties;
class UDisplaceMeshTextureMapProperties;
class UDynamicMeshComponent;
class UMeshStatisticsProperties;
class USelectiveTessellationProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDisplaceMeshTool : public USingleTargetWithSelectionTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDisplaceMeshCommonProperties* CommonProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDisplaceMeshTextureMapProperties* TextureMapProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDisplaceMeshPerlinNoiseProperties* NoiseProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDisplaceMeshSineWaveProperties* SineWaveProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USelectiveTessellationProperties* SelectiveTessellationProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ActiveContrastCurveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshStatisticsProperties* MeshStatistics;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMeshComponent* DynamicMeshComponent;
    
public:
    UDisplaceMeshTool();

};

