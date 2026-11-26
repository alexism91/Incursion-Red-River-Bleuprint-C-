#pragma once
#include "CoreMinimal.h"
#include "FloatCameraParameter.h"
#include "ShakeCameraNode.h"
#include "EnvelopeShakeCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEnvelopeShakeCameraNode : public UShakeCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter EaseInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter EaseOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter TotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShakeCameraNode* Shake;
    
    UEnvelopeShakeCameraNode();

};

