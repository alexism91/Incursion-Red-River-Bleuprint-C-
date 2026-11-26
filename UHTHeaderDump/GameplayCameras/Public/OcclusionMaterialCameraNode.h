#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "CameraNode.h"
#include "ECameraNodeOriginPosition.h"
#include "ECameraNodeSpace.h"
#include "FloatCameraParameter.h"
#include "Vector3dCameraParameter.h"
#include "OcclusionMaterialCameraNode.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UOcclusionMaterialCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OcclusionTransparencyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter OcclusionSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> OcclusionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraNodeOriginPosition OcclusionTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraNodeSpace OcclusionTargetOffsetSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3dCameraParameter OcclusionTargetOffset;
    
    UOcclusionMaterialCameraNode();

};

