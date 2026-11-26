#pragma once
#include "CoreMinimal.h"
#include "GameplayCamerasStateTreeTask.h"
#include "GameplayCamerasActivateCameraRigViaProxyTask.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCamerasActivateCameraRigViaProxyTask : public FGameplayCamerasStateTreeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunOnce;
    
    GAMEPLAYCAMERAS_API FGameplayCamerasActivateCameraRigViaProxyTask();
};

