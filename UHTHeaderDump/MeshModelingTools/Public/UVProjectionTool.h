#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionTool -FallbackName=SingleTargetWithSelectionTool
#include "UVProjectionTool.generated.h"

class UCombinedTransformGizmo;
class UExistingMeshMaterialProperties;
class UMaterialInstanceDynamic;
class UMeshOpPreviewWithBackgroundCompute;
class UMeshUVChannelProperties;
class UPreviewGeometry;
class USingleClickInputBehavior;
class UTransformProxy;
class UUVProjectionOperatorFactory;
class UUVProjectionToolEditActions;
class UUVProjectionToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UUVProjectionTool : public USingleTargetWithSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshUVChannelProperties* UVChannelProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUVProjectionToolProperties* BasicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUVProjectionToolEditActions* EditActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExistingMeshMaterialProperties* MaterialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CheckerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* TransformGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* TransformProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUVProjectionOperatorFactory* OperatorFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* EdgeRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USingleClickInputBehavior* ClickToSetPlaneBehavior;
    
public:
    UUVProjectionTool();

};

