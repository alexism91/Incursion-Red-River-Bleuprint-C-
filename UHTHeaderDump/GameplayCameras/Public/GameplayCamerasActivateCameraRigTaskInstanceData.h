#pragma once
#include "CoreMinimal.h"
#include "GameplayCamerasActivateCameraRigTaskInstanceData.generated.h"

class UCameraRigAsset;

USTRUCT(BlueprintType)
struct FGameplayCamerasActivateCameraRigTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraRigAsset* CameraRig;
    
    GAMEPLAYCAMERAS_API FGameplayCamerasActivateCameraRigTaskInstanceData();
};

