#pragma once
#include "CoreMinimal.h"
#include "GameplayCamerasStateTreeTask.h"
#include "GameplayCamerasActivateCameraRigTask.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCamerasActivateCameraRigTask : public FGameplayCamerasStateTreeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunOnce;
    
    GAMEPLAYCAMERAS_API FGameplayCamerasActivateCameraRigTask();
};

