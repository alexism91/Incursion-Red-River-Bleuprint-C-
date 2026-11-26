#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "CameraRigAssetReference.h"
#include "CombinedCameraRigsCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UCombinedCameraRigsCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraRigAssetReference> CameraRigReferences;
    
    UCombinedCameraRigsCameraNode();

};

