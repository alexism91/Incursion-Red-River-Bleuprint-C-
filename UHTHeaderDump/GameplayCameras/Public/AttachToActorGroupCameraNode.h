#pragma once
#include "CoreMinimal.h"
#include "CameraActorAttachmentInfo.h"
#include "CameraContextDataID.h"
#include "CameraNode.h"
#include "AttachToActorGroupCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAttachToActorGroupCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraActorAttachmentInfo> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraContextDataID AttachmentsDataID;
    
    UAttachToActorGroupCameraNode();

};

