#pragma once
#include "CoreMinimal.h"
#include "FloatCameraParameter.h"
#include "Integer32CameraParameter.h"
#include "PerlinNoiseData.h"
#include "ShakeCameraNode.h"
#include "PerlinNoiseRotationShakeCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPerlinNoiseRotationShakeCameraNode : public UShakeCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter AmplitudeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter FrequencyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteger32CameraParameter Octaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseData Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseData Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseData Roll;
    
    UPerlinNoiseRotationShakeCameraNode();

};

