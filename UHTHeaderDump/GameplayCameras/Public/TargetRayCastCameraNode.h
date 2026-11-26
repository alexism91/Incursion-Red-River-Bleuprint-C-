#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "BooleanCameraParameter.h"
#include "CameraNode.h"
#include "TargetRayCastCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UTargetRayCastCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter AutoFocus;
    
    UTargetRayCastCameraNode();

};

