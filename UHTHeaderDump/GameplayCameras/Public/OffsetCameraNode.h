#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "ECameraNodeSpace.h"
#include "Rotator3dCameraParameter.h"
#include "Vector3dCameraParameter.h"
#include "OffsetCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UOffsetCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3dCameraParameter TranslationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator3dCameraParameter RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraNodeSpace OffsetSpace;
    
    UOffsetCameraNode();

};

