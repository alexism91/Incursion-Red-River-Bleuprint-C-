#pragma once
#include "CoreMinimal.h"
#include "BooleanCameraParameter.h"
#include "CameraNode.h"
#include "AttachToPlayerPawnCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAttachToPlayerPawnCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter AttachToLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter AttachToRotation;
    
    UAttachToPlayerPawnCameraNode();

};

