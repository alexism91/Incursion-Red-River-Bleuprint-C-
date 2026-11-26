#pragma once
#include "CoreMinimal.h"
#include "FloatCameraParameter.h"
#include "Integer32CameraParameter.h"
#include "PerlinNoiseData.h"
#include "ShakeCameraNode.h"
#include "PerlinNoiseLocationShakeCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPerlinNoiseLocationShakeCameraNode : public UShakeCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter AmplitudeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter FrequencyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteger32CameraParameter Octaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseData X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseData Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseData Z;
    
    UPerlinNoiseLocationShakeCameraNode();

};

