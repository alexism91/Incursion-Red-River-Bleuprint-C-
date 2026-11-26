#pragma once
#include "CoreMinimal.h"
#include "CameraDirectorStateTreeEvaluationData.generated.h"

class UCameraRigAsset;
class UCameraRigProxyAsset;

USTRUCT(BlueprintType)
struct FCameraDirectorStateTreeEvaluationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCameraRigAsset*> ActiveCameraRigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCameraRigProxyAsset*> ActiveCameraRigProxies;
    
    GAMEPLAYCAMERAS_API FCameraDirectorStateTreeEvaluationData();
};

