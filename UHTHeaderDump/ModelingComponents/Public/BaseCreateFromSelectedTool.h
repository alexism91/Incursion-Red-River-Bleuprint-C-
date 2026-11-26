#pragma once
#include "CoreMinimal.h"
#include "MultiSelectionMeshEditingTool.h"
#include "BaseCreateFromSelectedTool.generated.h"

class UBaseCreateFromSelectedCollisionProperties;
class UBaseCreateFromSelectedHandleSourceProperties;
class UCombinedTransformGizmo;
class UCreateMeshObjectTypeProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UTransformInputsToolProperties;
class UTransformProxy;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformInputsToolProperties* TransformProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseCreateFromSelectedCollisionProperties* CollisionProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTransformProxy*> TransformProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCombinedTransformGizmo*> TransformGizmos;
    
public:
    UBaseCreateFromSelectedTool();

};

