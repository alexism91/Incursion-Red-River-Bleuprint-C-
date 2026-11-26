#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "ECameraNodeSpace.h"
#include "Vector3dCameraParameter.h"
#include "SetLocationCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USetLocationCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3dCameraParameter Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraNodeSpace OffsetSpace;
    
    USetLocationCameraNode();

};

