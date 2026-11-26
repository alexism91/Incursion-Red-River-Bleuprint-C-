#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "BooleanCameraVariableReference.h"
#include "CameraNode.h"
#include "ECollisionSafePosition.h"
#include "ECollisionSafePositionOffsetSpace.h"
#include "FloatCameraParameter.h"
#include "Vector3dCameraParameter.h"
#include "Vector3dCameraVariableReference.h"
#include "CollisionPushCameraNode.generated.h"

class UCameraValueInterpolator;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UCollisionPushCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionSafePosition SafePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3dCameraVariableReference CustomSafePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3dCameraParameter SafePositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionSafePositionOffsetSpace SafePositionOffsetSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraVariableReference EnableCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter CollisionSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraValueInterpolator* PushInterpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraValueInterpolator* PullInterpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunAsyncCollision;
    
    UCollisionPushCameraNode();

};

