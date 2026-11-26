#pragma once
#include "CoreMinimal.h"
#include "BaseCameraObjectReference.h"
#include "CameraShakeAssetReference.generated.h"

class UCameraShakeAsset;

USTRUCT(BlueprintType)
struct FCameraShakeAssetReference : public FBaseCameraObjectReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShakeAsset* CameraShake;
    
public:
    GAMEPLAYCAMERAS_API FCameraShakeAssetReference();
};

