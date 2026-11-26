#pragma once
#include "CoreMinimal.h"
#include "AssetReferenceCameraNode.h"
#include "CameraNode.h"
#include "CameraRigAssetReference.h"
#include "CustomCameraNodeParameterProvider.h"
#include "CameraRigCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UCameraRigCameraNode : public UCameraNode, public IAssetReferenceCameraNode, public ICustomCameraNodeParameterProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRigAssetReference CameraRigReference;
    
    UCameraRigCameraNode();


    // Fix for true pure virtual functions not being implemented
};

