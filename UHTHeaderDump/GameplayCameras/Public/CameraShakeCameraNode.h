#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "CameraShakeAssetReference.h"
#include "CustomCameraNodeParameterProvider.h"
#include "ECameraShakeEvaluationMode.h"
#include "CameraShakeCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UCameraShakeCameraNode : public UCameraNode, public ICustomCameraNodeParameterProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraShakeAssetReference CameraShakeReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShakeEvaluationMode EvaluationMode;
    
    UCameraShakeCameraNode();


    // Fix for true pure virtual functions not being implemented
};

