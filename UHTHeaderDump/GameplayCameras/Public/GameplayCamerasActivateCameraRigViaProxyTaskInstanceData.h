#pragma once
#include "CoreMinimal.h"
#include "GameplayCamerasActivateCameraRigViaProxyTaskInstanceData.generated.h"

class UCameraRigProxyAsset;

USTRUCT(BlueprintType)
struct FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraRigProxyAsset* CameraRigProxy;
    
    GAMEPLAYCAMERAS_API FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData();
};

