#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "ECameraNodeSpace.h"
#include "Rotator3dCameraParameter.h"
#include "SetRotationCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USetRotationCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator3dCameraParameter Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraNodeSpace OffsetSpace;
    
    USetRotationCameraNode();

};

