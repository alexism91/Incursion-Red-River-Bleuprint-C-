#pragma once
#include "CoreMinimal.h"
#include "BooleanCameraParameter.h"
#include "CameraActorAttachmentInfo.h"
#include "CameraContextDataID.h"
#include "CameraNode.h"
#include "AttachToActorCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAttachToActorCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraActorAttachmentInfo Attachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraContextDataID AttachmentDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter AttachToLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter AttachToRotation;
    
    UAttachToActorCameraNode();

};

